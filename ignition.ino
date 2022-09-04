
#define FRONTS_PER_ROTATE 1 // Количество прохождений шторки через датчик за 1 оборот
#define Modul_Size 600  // Размер активного элемента

// тут выставляем таблицы опережения углы * 10.
// таблица саруман опозит (Одиночка)нагрузка 0-20
#define ANGLE_0_700 10
#define ANGLE_0_1000 65
#define ANGLE_0_1250 129
#define ANGLE_0_1500 183
#define ANGLE_0_1750 237
#define ANGLE_0_2000 282
#define ANGLE_0_2250 317
#define ANGLE_0_2500 347
#define ANGLE_0_2750 373
#define ANGLE_0_3000 393
#define ANGLE_0_3250 412
#define ANGLE_0_3500 426
#define ANGLE_0_3750 435
#define ANGLE_0_4000 439
#define ANGLE_0_4250 441
#define ANGLE_0_4500 444
#define ANGLE_0_4750 447
#define ANGLE_0_5000 450
#define ANGLE_0_5250 450
#define ANGLE_0_5500 450
#define ANGLE_0_5750 450
#define ANGLE_0_6000 450
#define ANGLE_0_6250 445
#define ANGLE_0_6500 440
#define ANGLE_0_6750 430
#define ANGLE_0_7000 420

// таблица саруман опозит нагрузка 20-40
#define ANGLE_1_700 10
#define ANGLE_1_1000 49
#define ANGLE_1_1250 97
#define ANGLE_1_1500 137
#define ANGLE_1_1750 178
#define ANGLE_1_2000 211
#define ANGLE_1_2250 238
#define ANGLE_1_2500 260
#define ANGLE_1_2750 305
#define ANGLE_1_3000 345
#define ANGLE_1_3250 367
#define ANGLE_1_3500 383
#define ANGLE_1_3750 397
#define ANGLE_1_4000 404
#define ANGLE_1_4250 413
#define ANGLE_1_4500 417
#define ANGLE_1_4750 421
#define ANGLE_1_5000 421
#define ANGLE_1_5250 420
#define ANGLE_1_5500 420
#define ANGLE_1_5750 420
#define ANGLE_1_6000 420
#define ANGLE_1_6250 420
#define ANGLE_1_6500 420
#define ANGLE_1_6750 420
#define ANGLE_1_7000 420
// таблица саруман опозит (колясыч)нагрузка 40-60
#define ANGLE_2_700 10
#define ANGLE_2_1000 33
#define ANGLE_2_1250 65
#define ANGLE_2_1500 92
#define ANGLE_2_1750 119
#define ANGLE_2_2000 141
#define ANGLE_2_2250 159
#define ANGLE_2_2500 174
#define ANGLE_2_2750 238
#define ANGLE_2_3000 297
#define ANGLE_2_3250 324
#define ANGLE_2_3500 345
#define ANGLE_2_3750 360
#define ANGLE_2_4000 370
#define ANGLE_2_4250 378
#define ANGLE_2_4500 383
#define ANGLE_2_4750 386
#define ANGLE_2_5000 387
#define ANGLE_2_5250 387
#define ANGLE_2_5500 386
#define ANGLE_2_5750 385
#define ANGLE_2_6000 385
#define ANGLE_2_6250 385
#define ANGLE_2_6500 385
#define ANGLE_2_6750 385
#define ANGLE_2_7000 385
// таблица саруман опозит (колясыч)нагрузка 60-80
#define ANGLE_3_700 10
#define ANGLE_3_1000 17
#define ANGLE_3_1250 33
#define ANGLE_3_1500 46
#define ANGLE_3_1750 60
#define ANGLE_3_2000 71
#define ANGLE_3_2250 80
#define ANGLE_3_2500 88
#define ANGLE_3_2750 170
#define ANGLE_3_3000 248
#define ANGLE_3_3250 281
#define ANGLE_3_3500 308
#define ANGLE_3_3750 324
#define ANGLE_3_4000 335
#define ANGLE_3_4250 343
#define ANGLE_3_4500 348
#define ANGLE_3_4750 351
#define ANGLE_3_5000 354
#define ANGLE_3_5250 353
#define ANGLE_3_5500 353
#define ANGLE_3_5750 352
#define ANGLE_3_6000 352
#define ANGLE_3_6250 352
#define ANGLE_3_6500 352
#define ANGLE_3_6750 352
#define ANGLE_3_7000 352


// таблица саруман опозит (колясыч)нагрузка 80-100 , график занижен до 2500 на 160 далее постепенное уменьшение занижения до 130 , чтоб при половини открытого газа под нагрузкой были около 0- е значения (занижение от грфика 0), избегаем детонации.
#define  ANGLE_4_700 -150
#define ANGLE_4_1000  -95
#define ANGLE_4_1250  -31
#define ANGLE_4_1500  23
#define ANGLE_4_1750  77
#define ANGLE_4_2000  122
#define ANGLE_4_2250  157
#define ANGLE_4_2500  187
#define ANGLE_4_2750  213
#define ANGLE_4_3000  233
#define ANGLE_4_3250  252
#define ANGLE_4_3500  276
#define ANGLE_4_3750  295
#define ANGLE_4_4000  309
#define ANGLE_4_4250  321
#define ANGLE_4_4500  324
#define ANGLE_4_4750  327
#define ANGLE_4_5000  330
#define ANGLE_4_5250  330
#define ANGLE_4_5500  330
#define ANGLE_4_5750  330
#define ANGLE_4_6000  330
#define ANGLE_4_6250  325
#define ANGLE_4_6500  320
#define ANGLE_4_6750  310
#define ANGLE_4_7000  300


//// таблица саруман опозит (к750) при нажатии кнопки это оставленно для примера как отправная точка.
//#define ANGLE_700 10
//#define ANGLE_1000 11
//#define ANGLE_1250 46
//#define ANGLE_1500 82
//#define ANGLE_1750 117
//#define ANGLE_2000 152
//#define ANGLE_2250 185
//#define ANGLE_2500 218
//#define ANGLE_2750 251
//#define ANGLE_3000 284
//#define ANGLE_3250 299
//#define ANGLE_3500 313
//#define ANGLE_3750 318
//#define ANGLE_4000 322
//#define ANGLE_4250 323
//#define ANGLE_4500 325
//#define ANGLE_4750 327
//#define ANGLE_5000 327
//#define ANGLE_5250 326
//#define ANGLE_5500 324
//#define ANGLE_5750 323
//#define ANGLE_6000 321
//#define ANGLE_6250 321
//#define ANGLE_6500 321
//#define ANGLE_6750 321
//#define ANGLE_7000 321

#define MICROS_IN_MINUTE 60000000UL // Количество микросекунд в минуте
#define TIME_FOR_RPM_COUNT (MICROS_IN_MINUTE / FRONTS_PER_ROTATE) // определяем коэффициент для расчёта скорости вращения в зависимости от количества импульсов на оборот
#define DEC_DEGREES 3600 // Количество десятичных долей градуса в полном обороте, потому что все расчёты углов мы ведём в десятичных долях

// Объявляем контрольные точки перегиба графика (обороты в минуту)
#define RPM_700 700
#define RPM_1000 1000
#define RPM_1250 1250
#define RPM_1500 1500
#define RPM_1750 1750
#define RPM_2000 2000
#define RPM_2250 2250
#define RPM_2500 2500
#define RPM_2750 2750
#define RPM_3000 3000
#define RPM_3250 3250
#define RPM_3500 3500
#define RPM_3750 3750
#define RPM_4000 4000
#define RPM_4250 4250
#define RPM_4500 4500
#define RPM_4750 4750
#define RPM_5000 5000
#define RPM_5250 5250
#define RPM_5500 5500
#define RPM_5750 5750
#define RPM_6000 6000
#define RPM_6250 6250
#define RPM_6500 6500
#define RPM_6750 6750
#define RPM_7000 7000

//переменные угла опережения
int  ANGLE_700 = ANGLE_2_700;
int  ANGLE_1000 = ANGLE_2_1000 ;
int  ANGLE_1250 = ANGLE_2_1250 ;
int  ANGLE_1500 = ANGLE_2_1500 ;
int  ANGLE_1750 = ANGLE_2_1750 ;
int  ANGLE_2000 = ANGLE_2_2000 ;
int  ANGLE_2250 = ANGLE_2_2250 ;
int  ANGLE_2500 = ANGLE_2_2500 ;
int  ANGLE_2750 = ANGLE_2_2750 ;
int  ANGLE_3000 = ANGLE_2_3000 ;
int  ANGLE_3250 = ANGLE_2_3250 ;
int  ANGLE_3500 = ANGLE_2_3500 ;
int  ANGLE_3750 = ANGLE_2_3750 ;
int  ANGLE_4000 = ANGLE_2_4000 ;
int  ANGLE_4250 = ANGLE_2_4250 ;
int  ANGLE_4500 = ANGLE_2_4500 ;
int  ANGLE_4750 = ANGLE_2_4750 ;
int  ANGLE_5000 = ANGLE_2_5000 ;
int  ANGLE_5250 = ANGLE_2_5250 ;
int  ANGLE_5500 = ANGLE_2_5500 ;
int  ANGLE_5750 = ANGLE_2_5750 ;
int  ANGLE_6000 = ANGLE_2_6000 ;
int  ANGLE_6250 = ANGLE_2_6250 ;
int  ANGLE_6500 = ANGLE_2_6500 ;
int  ANGLE_6750 = ANGLE_2_6750 ;
int  ANGLE_7000 = ANGLE_2_7000;
unsigned long testtime;
unsigned long loadtime;         // Переменная для расчёта времени впуска.
unsigned long oldtime;         // Переменная для расчёта RPM.
unsigned long diffTime;        // Переменная для расчёта RPM.
unsigned long VMTtime = 0;         // Время достижения ВМТ (вход шторки в датчик). Текущее время, за вычетом времени на дёргание ногами
unsigned long nextIgnition = 0; // Время, в которое надо подать искру, если используется временной сдвиг
word rpm = 0;                 // Переменная тахометра.
bool modulator = true;               // Флаг "текущее состояние шторки".
bool ignitionFlag = false;            // Флаг "немедленное зажигание без задержки"
bool ignitionFlagWithOffset = false;  // Флаг "Момент зажигания с временым сдвигом" (МЗВС)
bool oldModulator = true;            // Флаг "предыдущее состояние шторки"
int ignitionDegree;      // Угол зажигания.
byte startloop = 0;            //устанавливаем переменную счетчика первого оборота двигателя от втм
byte ignitionload =  0;
bool loadRead = false; // флаг имитации шторки

// Назначаем переменные границ изменения показаний МАР, устанавливаем их на старте програмы инвертно для корректной работы самоподстройки по показаниям
word MapMax = 900; // максимальное значение МАР
word MapMin = 900;  // минимальное значене МАР
int MapOld;   //Предыдущее значение МАР
unsigned long MapTime; // переменная времени считывания МАР
bool MapReadFlag = false; // переменная  считывания МАР
void setup()

{
  pinMode(1, OUTPUT);  // выход на коммутатор
  pinMode(0, INPUT_PULLUP);  // Вход с датчика зажигания.
  pinMode(2, INPUT);  //Назначаем пин MAP
  PORTB |= (1 << 1);  //Подаем высокий уровень на Р1 , БАХ
}
void readrpm()  // расчитываем обороты.
{
  diffTime = VMTtime - oldtime;
  rpm = TIME_FOR_RPM_COUNT / diffTime;
  oldtime = VMTtime;
  MapTime = VMTtime + diffTime / 4; // вычисляем время середены такта впуска.
  MapReadFlag = true;
}

void MapRead() {  // Функция обработки МАР датчика и изменение графиков от нагрузки
  if (rpm >= RPM_700) {
    //for (byte i = 0; i < 3; i++) { // пока отключен и показания считаем один раз , экономия времени.
   word   Map = analogRead(1); //Текущее значение МАР
    //}
    //Map = Map / 3;
    if (Map != MapOld) {
      if  (Map < MapMin) {
        MapMin = Map;
      }
//      if (Map > MapMax) {
//        MapMax = Map;
//      }
      MapOld = Map;
      // int deltaMap5 = MapMax - MapMin;
      // Включено линейное изменение угла от нагрузки между 2-мя  графиками ANGLE_0 и ANGLE_4
          ANGLE_700 = map (Map,MapMin,MapMax,ANGLE_0_700,ANGLE_4_700);
          ANGLE_1000 = map (Map,MapMin,MapMax,ANGLE_0_1000,ANGLE_4_1000);
          ANGLE_1250 = map (Map,MapMin,MapMax,ANGLE_0_1250,ANGLE_4_1250);
          ANGLE_1500 = map (Map,MapMin,MapMax,ANGLE_0_1500,ANGLE_4_1500);
          ANGLE_1750 = map (Map,MapMin,MapMax,ANGLE_0_1750,ANGLE_4_1750);
          ANGLE_2000 = map (Map,MapMin,MapMax,ANGLE_0_2000,ANGLE_4_2000);
          ANGLE_2250 = map (Map,MapMin,MapMax,ANGLE_0_2250,ANGLE_4_2250);
          ANGLE_2500 = map (Map,MapMin,MapMax,ANGLE_0_2500,ANGLE_4_2500);
          ANGLE_2750 = map (Map,MapMin,MapMax,ANGLE_0_2750,ANGLE_4_2750);
          ANGLE_3000 = map (Map,MapMin,MapMax,ANGLE_0_3000,ANGLE_4_3000);
          ANGLE_3250 = map (Map,MapMin,MapMax,ANGLE_0_3250,ANGLE_4_3250);
          ANGLE_3500 = map (Map,MapMin,MapMax,ANGLE_0_3500,ANGLE_4_3500);
          ANGLE_3750 = map (Map,MapMin,MapMax,ANGLE_0_3750,ANGLE_4_3750);
          ANGLE_4000 = map (Map,MapMin,MapMax,ANGLE_0_4000,ANGLE_4_4000);
          ANGLE_4250 = map (Map,MapMin,MapMax,ANGLE_0_4250,ANGLE_4_4250);
          ANGLE_4500 = map (Map,MapMin,MapMax,ANGLE_0_4500,ANGLE_4_4500);
          ANGLE_4750 = map (Map,MapMin,MapMax,ANGLE_0_4750,ANGLE_4_4750);
          ANGLE_5000 = map (Map,MapMin,MapMax,ANGLE_0_5000,ANGLE_4_5000);
          ANGLE_5250 = map (Map,MapMin,MapMax,ANGLE_0_5250,ANGLE_4_5250);
          ANGLE_5500 = map (Map,MapMin,MapMax,ANGLE_0_5500,ANGLE_4_5500);
          ANGLE_5750 = map (Map,MapMin,MapMax,ANGLE_0_5750,ANGLE_4_5750);
          ANGLE_6000 = map (Map,MapMin,MapMax,ANGLE_0_6000,ANGLE_4_6000);
          ANGLE_6250 = map (Map,MapMin,MapMax,ANGLE_0_6250,ANGLE_4_6250);
          ANGLE_6500 = map (Map,MapMin,MapMax,ANGLE_0_6500,ANGLE_4_6500);
          ANGLE_6750 = map (Map,MapMin,MapMax,ANGLE_0_6750,ANGLE_4_6750);
          ANGLE_7000 = map (Map,MapMin,MapMax,ANGLE_0_7000,ANGLE_4_7000);
 
    }
  }
}

void countIgnitionTime() { // Функция расчета времени сдвига зажигания.
  nextIgnition = VMTtime + diffTime - (diffTime * ignitionDegree / DEC_DEGREES); // устанавливаем время выхода активного элемента из датчика , момент искры.
  ignitionFlagWithOffset = true;
  loadtime = VMTtime + diffTime - (diffTime * (ignitionDegree + Modul_Size) / DEC_DEGREES); // устанавливаем время имитации шторки вхождение активного элемента в датчик
  loadRead = true;

}
void AngleCalc() { // Функция расчета угла опережения от оборотов.
  if (rpm > RPM_4000) {                    // Если обороты больше 4000
    if (rpm > RPM_6000) {                  // Если обороты больше 6000
      if (rpm > RPM_6500) {                // Если обороты более 6500
        if (rpm > RPM_6750) {                // Если обороты более 6750
          if (rpm > RPM_7000) {                // Если обороты более 7000
            return;                             //Выход без расчета, искра в вмт
          }
          else {           // Если обороты меньше или ровно 7000 и обороты больше 6750
            ignitionDegree = map(rpm, RPM_6750, RPM_7000, ANGLE_6750, ANGLE_7000); //-ignitionLoad; // устанавливаем  угол в пределах
          }

        }
        else {           // Если обороты меньше или ровно 6750 и обороты больше 6500
          ignitionDegree = map(rpm, RPM_6500, RPM_6750, ANGLE_6500, ANGLE_6750); //-ignitionLoad; // устанавливаем  угол в пределах
        }
      }
      else {           // Если обороты меньше или ровно 6500 и обороты больше 6000
        if (rpm > RPM_6250) {
          ignitionDegree = map(rpm, RPM_6250, RPM_6500, ANGLE_6250, ANGLE_6500); //-ignitionLoad; // устанавливаем  угол в пределах
        }
        else {           // Если обороты меньше или ровно 6250 и обороты больше 6000
          ignitionDegree = map(rpm, RPM_6000, RPM_6250, ANGLE_6000, ANGLE_6250); //-ignitionLoad; // устанавливаем  угол в пределах
        }
      }
    }

    else {           // Если обороты меньше или ровно 6000 и обороты больше 4000
      if (rpm > RPM_5000) {                // Если обороты более 5000
        if (rpm > RPM_5500) {                // Если обороты более 5500
          if (rpm > RPM_5750) {                // Если обороты более 5750 и меньше или ровно 6000
            ignitionDegree = map(rpm, RPM_5750, RPM_6000, ANGLE_5750, ANGLE_6000); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 5750 и обороты больше 5500
            ignitionDegree = map(rpm, RPM_5500, RPM_5750, ANGLE_5500, ANGLE_5750); //-ignitionLoad; // устанавливаем  угол в пределах
          }

        }
        else {           // Если обороты меньше или ровно 5500 и обороты больше 5000
          if (rpm > RPM_5250) {                // Если обороты более 5250 и меньше или ровно 5500
            ignitionDegree = map(rpm, RPM_5250, RPM_5500, ANGLE_5250, ANGLE_5500); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 5250 и обороты больше 5000
            ignitionDegree = map(rpm, RPM_5000, RPM_5250, ANGLE_5000, ANGLE_5250); //-ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
      else {           // Если обороты меньше или ровно 5000 и обороты больше 4000
        if (rpm > RPM_4500) {                // Если обороты более 4500
          if (rpm > RPM_4750) {                // Если обороты более 4750 и меньше или ровно 5000
            ignitionDegree = map(rpm, RPM_4750, RPM_5000, ANGLE_4750, ANGLE_5000); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 4750 и обороты больше 4500
            ignitionDegree = map(rpm, RPM_4500, RPM_4750, ANGLE_4500, ANGLE_4750); //-ignitionLoad; // устанавливаем  угол в пределах
          }

        }
        else {           // Если обороты меньше или ровно 4500 и обороты больше 4000
          if (rpm > RPM_4250) {                // Если обороты более 4250 и меньше или ровно 4500
            ignitionDegree = map(rpm, RPM_4250, RPM_4500, ANGLE_4250, ANGLE_4500); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 4250 и обороты больше4500
            ignitionDegree = map(rpm, RPM_4000, RPM_4250, ANGLE_4000, ANGLE_4250); //-ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
    }
  }



  else {  // Если обороты меньше или ровно 4000
    if (rpm > RPM_2000) {                   // Если обороты меньше или ровно 4000 и обороты больше 2000
      if (rpm > RPM_3000) {              // Если обороты меньше или ровно 4000 и обороты больше 3000
        if (rpm > RPM_3500) {              // Если обороты меньше или ровно 4000 и обороты больше 3500
          if (rpm > RPM_3750) {              // Если обороты меньше или ровно 4000 и обороты больше 3750
            ignitionDegree = map(rpm, RPM_3750, RPM_4000, ANGLE_3750, ANGLE_4000);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 3750 и обороты больше 3500
            ignitionDegree = map(rpm, RPM_3500, RPM_3750, ANGLE_3500, ANGLE_3750);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
        else { // Если обороты меньше или ровно 3500 и обороты больше 3000
          if (rpm > RPM_3250) {              // Если обороты меньше или ровно 3500 и обороты больше 3250
            ignitionDegree = map(rpm, RPM_3250, RPM_3500, ANGLE_3250, ANGLE_3500);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 3250 и обороты больше 3000
            ignitionDegree = map(rpm, RPM_3000, RPM_3250, ANGLE_3000, ANGLE_3250);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
      else {// Если обороты меньше или ровно 3000 и обороты больше 2000
        if (rpm > RPM_2500) {              // Если обороты меньше или ровно 3000 и обороты больше 2500
          if (rpm > RPM_2750) {              // Если обороты меньше или ровно 3000 и обороты больше 2750
            ignitionDegree = map(rpm, RPM_2750, RPM_3000, ANGLE_2750, ANGLE_3000);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 2750 и обороты больше 2500
            ignitionDegree = map(rpm, RPM_2500, RPM_2750, ANGLE_2500, ANGLE_2750);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
        else { // Если обороты меньше или ровно 2500 и обороты больше 2000
          if (rpm > RPM_2250) {              // Если обороты меньше или ровно 2500 и обороты больше 2250
            ignitionDegree = map(rpm, RPM_2250, RPM_2500, ANGLE_2250, ANGLE_2500);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 2250 и обороты больше 2000
            ignitionDegree = map(rpm, RPM_2000, RPM_2250, ANGLE_2000, ANGLE_2250);// -ignitionLoad; // устанавливаем  угол в пределах
          }// конец обороты меньше или ровно 2250 и обороты больше 2000
        }   // конец обороты меньше или ровно 2500 и обороты больше 2000
      }   //конец  обороты меньше или ровно 3000 и обороты больше 2000


    }  // конец обороты меньше или ровно 4000 и обороты больше 2000
    else {// Если обороты меньше или ровно 2000 и обороты больше 0
      if (rpm > RPM_1000) {              // Если обороты меньше или ровно 2000 и обороты больше 1000
        if (rpm > RPM_1500) {              // Если обороты меньше или ровно 2000 и обороты больше 1500
          if (rpm > RPM_1750) {              // Если обороты меньше или ровно 2000 и обороты больше 1750
            ignitionDegree = map(rpm, RPM_1750, RPM_2000, ANGLE_1750, ANGLE_2000);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 1750 и обороты больше 1500
            ignitionDegree = map(rpm, RPM_1500, RPM_1750, ANGLE_1500, ANGLE_1750);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
        else { // Если обороты меньше или ровно 1500 и обороты больше 1000
          if (rpm > RPM_1250) {              // Если обороты меньше или ровно 1500 и обороты больше 1250
            ignitionDegree = map(rpm, RPM_1250, RPM_1500, ANGLE_1250, ANGLE_1500);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 1250 и обороты больше 1000
            ignitionDegree = map(rpm, RPM_1000, RPM_1250, ANGLE_1000, ANGLE_1250);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
      else {// Если обороты меньше или ровно 1000 и обороты больше 0
        if (rpm > RPM_700) {              // Если обороты меньше или ровно 1000 и обороты больше 700
          ignitionDegree = map(rpm, RPM_700, RPM_1000, ANGLE_700, ANGLE_1000);// -ignitionLoad; // устанавливаем  угол в пределах
        }
        else { // Если обороты меньше или ровно 700 и обороты больше 0
          ignitionDegree = 0;
        }
      }
    }   //конец  обороты меньше или ровно 2000 и обороты больше 0000
  } // конец обороты менше или ровно 4000
}// Функция расчета угла опережения



void loop() {
  if (startloop > 1) { // проверяем переменную первого запуска , если оборот первый то пропускаем условия образования искры, до момента изменения показателей модулятора
    if (micros() >= loadtime && loadRead == true) { // Если время больше или ровно времени опережения и флаг зажигания включен имитируем выход элемента из датчика , искра
      PORTB &= ~(1 << 1); // Подаем низкий уровень на выход Р1 (имитируем шторку)
      loadRead = false;
    }
    if (micros() >= nextIgnition && ignitionFlagWithOffset == true) { // Если время больше или ровно времени опережения и флаг зажигания включен имитируем выход элемента из датчика , искра
      PORTB |= (1 << 1);  //Подаем высокий уровень на Р1 , БАХ
      ignitionFlagWithOffset = false;
    }

    if (micros() >= MapTime && MapReadFlag == true) {
      MapRead(); // считываем разряжение
      MapReadFlag = false;
      AngleCalc(); // Расчитываем угол
      if (ignitionDegree >= ANGLE_1_700) {    // если угол опережения больше или равен значению ANGLE_1_700. то есть 1 градус тоимеет смысл считать время опережения. В противном случает работает принудительная искра в ВМТ
      countIgnitionTime(); // Считаем время опережения
      }
    }
  } // конец проверки на первый оборот

  //modulator = digitalRead(0); //Считывает состояние датчика зажигания.
  if (PINB & 0b00000001) { //Если бит установлен =1
    modulator = true ;
  }
  else {
    modulator = false;
  }

  if (modulator != oldModulator) {
    oldModulator = modulator;

    if (modulator != HIGH) {  // Вход активного элемента в датчик , HIGH для активного элемента вырез, LOW для активного элемента пластины Для ВАЗ коммутатора ставим Инвертированное значение.

      PORTB &= ~(1 << 1); // Подаем низкий уровень на выход Р1 (имитируем шторку)

      return;
    }
    VMTtime = micros(); // Записываем время вмт
    PORTB |= (1 << 1); //Подаем высокий уровень на Р1 , БАХ в ВМТ (подаем искру в вмт на ХХ)
    readrpm(); // Считаем обороты
    if (startloop <= 1) { // Пока идет первый оборот двигателя
      startloop = startloop + 1 ;    //устанасливаем счетчик в  переменную первого полного оборота двигателя от втм
    }
    testtime = micros();
    if (testtime < oldtime){ // Защита при переполнении счетчика микрос
      startloop = 0;
    }

  }


  else { // если модулятор не изменился
    testtime = micros();
    if (testtime < oldtime){ // Защита при переполнении счетчика микрос
      startloop = 0;
      return;
    }
    if (testtime > (oldtime + 1000000)) { //Отключение катушки если более 0.1секунд простоя
      PORTB |= (1 << 1);  //Подаем высокий уровень на Р1 отключаем катушку
      startloop = 0;
    }
  }// если модулятор не изменился

}
