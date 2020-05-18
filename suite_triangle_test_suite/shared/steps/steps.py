# -*- coding: utf-8 -*-

# A quick introduction to implementing scripts for BDD tests:
#
# This file contains snippets of script code to be executed as the .feature
# file is processed. See the section 'Behaviour Driven Testing' in the 'API
# Reference Manual' chapter of the Squish manual for a comprehensive reference.
#
# The decorators Given/When/Then/Step can be used to associate a script snippet
# with a pattern which is matched against the steps being executed. Optional
# table/multi-line string arguments of the step are passed via a mandatory
# 'context' parameter:
#
#   @When("I enter the text")
#   def whenTextEntered(context):
#      <code here>
#
# The pattern is a plain string without the leading keyword, but a couple of
# placeholders including |any|, |word| and |integer| are supported which can be
# used to extract arbitrary, alphanumeric and integer values resp. from the
# pattern; the extracted values are passed as additional arguments:
#
#   @Then("I get |integer| different names")
#   def namesReceived(context, numNames):
#      <code here>
#
# Instead of using a string with placeholders, a regular expression can be
# specified. In that case, make sure to set the (optional) 'regexp' argument
# to True.

import names


@Given("Запустить приложение |any|")
def step(context, project_name):
    startApplication("someProject")
    
@When("Ввести 3 значения: |any|, |any| и |any|")
def step(context, a, b, c):
    mouseClick(waitForObject(names.first_value_lineedit_QLineEdit))
    type(waitForObject(names.first_value_lineedit_QLineEdit), "<CTRL+A>")
    type(waitForObject(names.first_value_lineedit_QLineEdit), a)
    mouseClick(waitForObject(names.second_value_lineedit_QLineEdit))
    type(waitForObject(names.second_value_lineedit_QLineEdit), "<CTRL+A>")
    type(waitForObject(names.second_value_lineedit_QLineEdit), b)
    mouseClick(waitForObject(names.third_value_lineedit_QLineEdit))
    type(waitForObject(names.third_value_lineedit_QLineEdit), "<CTRL+A>")
    type(waitForObject(names.third_value_lineedit_QLineEdit), c)

@When("Нажать на кнопку 'Проверка!'")
def step(context):
    clickButton(waitForObject(names.main_window_check_buutton_QPushButton))
    
@Then("Появилась строка с типом треугольника: |any|")
def step(context, type):
    pass

@Then("Появилось изображение треугольника |any|")
def step(context, vp_name):
    pass
    #test.vp(vp_name + "_vp")
