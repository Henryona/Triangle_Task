# This is a sample .feature file
# Squish feature files use the Gherkin language for describing features, a short example
# is given below. You can find a more extensive introduction to the Gherkin format at
# https://github.com/cucumber/cucumber/wiki/Gherkin
Feature: A brief yet descriptive text of what is desired

    Some textual description of the business value of this feature goes
    here. The text is free-form.

    The description can span multiple paragraphs.

    Scenario Outline: Проверка 1

        Given Запустить приложение SomeProject
         When Ввести 3 значения: <a>, <b> и <c>
          And Нажать на кнопку 'Проверка!'
         Then Появилась строка с типом треугольника: <type>
          And Появилось изображение треугольника <vp>
     Examples:
             |  a  |  b  |  c  |  type  |   vp   |
             |  10 |  19 |  10 |   тип  |10_19_10|


