# Phone_Number_Alphabets
for assignment 6-02 Letter Combinations of a Phone Number



Включени библиотеки: Кодът включва необходимите библиотеки като <iostream>, <vector> и <map>.

Декларация на пространството за имена: Изявлението using namespace std; позволява използването на имена от пространството std без предшествуваща приставка std::.

Съпоставяне на цифри: Мапът digitsMapping асоциира всяка цифра (0-9) с вектор от символи, представляващи съответните букви или символи на клавиатурата на телефона.

Функция за комбинации от букви: Функцията letterCombinations приема низ, представляващ телефонен номер, и връща вектор от низове, съдържащи всички възможни комбинации от букви за този телефонен номер. Тя итерира през всяка цифра във входния низ, извлича съответните символи от digitsMapping и генерира комбинации с тези символи.

Главна функция:

Декларира променливи: inputs, за да съхранява телефонните номера, въведени от потребителя, и numPhones, за да съхранява броя на телефонните номера.
Подканва потребителя да въведе броя на телефонните номера, които иска да въведе.
Итерира през всеки телефонен номер и подканва потребителя да ги въведе, като ги съхранява във вектора inputs.
Извиква letterCombinations за всеки телефонен номер в inputs и извежда получените комбинации от букви.
Вход и изход:

Програмата подканва потребителя да въведе броя на телефонните номера, които иска да въведе.
След това тя по единият начин или друг, подканва за всеки телефонен номер.
След като получи целият вход, тя генерира и извежда комбинациите от букви за всеки телефонен номер.
Като цяло, тази програма позволява на потребителите да въвеждат телефонни номера и след това генерира и извежда комбинациите от букви, съответстващи на тези номера, използвайки съпоставянето на клавиатурата на телефона, дефинирано в мапа digitsMapping.
