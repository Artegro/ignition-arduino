
#define FRONTS_PER_ROTATE 1 // Количество прохождений шторки через датчик за 1 оборот
#define Modul_Size 600  // Размер активного элемента

// тут выставляем таблицы опережения углы * 10.
// таблица саруман опозит (Одиночка)нагрузка 0-20    колличество микросекунд за одни оборот делим на 3600 и умножаем на угол опережения , так как углы в 10-х долях градусов потому и делим на 3600
#define ANGLE_0_700 (RPM_MIC_700 / 3600 * 10)
#define ANGLE_0_1000 (RPM_MIC_1000 / 3600 * 65)
#define ANGLE_0_1250 (RPM_MIC_1250 / 3600 * 129)
#define ANGLE_0_1500 (RPM_MIC_1500 / 3600 * 183)
#define ANGLE_0_1750 (RPM_MIC_1750 / 3600 * 237)
#define ANGLE_0_2000 (RPM_MIC_2000 / 3600 * 282)
#define ANGLE_0_2250 (RPM_MIC_2250 / 3600 * 317)
#define ANGLE_0_2500 (RPM_MIC_2500 / 3600 * 347)
#define ANGLE_0_2750 (RPM_MIC_2750 / 3600 * 373)
#define ANGLE_0_3000 (RPM_MIC_3000 / 3600 * 393)
#define ANGLE_0_3250 (RPM_MIC_3250 / 3600 * 412)
#define ANGLE_0_3500 (RPM_MIC_3500 / 3600 * 426)
#define ANGLE_0_3750 (RPM_MIC_3750 / 3600 * 435)
#define ANGLE_0_4000 (RPM_MIC_4000 / 3600 * 439)
#define ANGLE_0_4250 (RPM_MIC_4250 / 3600 * 441)
#define ANGLE_0_4500 (RPM_MIC_4500 / 3600 * 444)
#define ANGLE_0_4750 (RPM_MIC_4750 / 3600 * 447)
#define ANGLE_0_5000 (RPM_MIC_5000 / 3600 * 450)
#define ANGLE_0_5250 (RPM_MIC_5250 / 3600 * 450)
#define ANGLE_0_5500 (RPM_MIC_5500 / 3600 * 450)
#define ANGLE_0_5750 (RPM_MIC_5750 / 3600 * 450)
#define ANGLE_0_6000 (RPM_MIC_6000 / 3600 * 450)
#define ANGLE_0_6250 (RPM_MIC_6250 / 3600 * 445)
#define ANGLE_0_6500 (RPM_MIC_6500 / 3600 * 440)
#define ANGLE_0_6750 (RPM_MIC_6750 / 3600 * 430)
#define ANGLE_0_7000 (RPM_MIC_7000 / 3600 * 420)

// таблица саруман опозит (колясыч)нагрузка 80-100 , график занижен до 2500 на 160 далее постепенное уменьшение занижения до 130 , чтоб при половини открытого газа под нагрузкой были около 0- е значения (занижение от грфика 0), избегаем детонации.
#define  ANGLE_4_700 (RPM_MIC_700 / 3600 * -150)
#define ANGLE_4_1000  (RPM_MIC_1000 / 3600 * -95)
#define ANGLE_4_1250  (RPM_MIC_1250 / 3600 * -31)
#define ANGLE_4_1500  (RPM_MIC_1500 / 3600 * 23)
#define ANGLE_4_1750  (RPM_MIC_1750 / 3600 * 77)
#define ANGLE_4_2000  (RPM_MIC_2000 / 3600 * 122)
#define ANGLE_4_2250  (RPM_MIC_2250 / 3600 * 157)
#define ANGLE_4_2500  (RPM_MIC_2500 / 3600 * 187)
#define ANGLE_4_2750  (RPM_MIC_2750 / 3600 * 213)
#define ANGLE_4_3000  (RPM_MIC_3000 / 3600 * 233)
#define ANGLE_4_3250  (RPM_MIC_3250 / 3600 * 252)
#define ANGLE_4_3500  (RPM_MIC_3500 / 3600 * 276)
#define ANGLE_4_3750  (RPM_MIC_3750 / 3600 * 295)
#define ANGLE_4_4000  (RPM_MIC_4000 / 3600 * 309)
#define ANGLE_4_4250  (RPM_MIC_4250 / 3600 * 321)
#define ANGLE_4_4500  (RPM_MIC_4500 / 3600 * 324)
#define ANGLE_4_4750  (RPM_MIC_4750 / 3600 * 327)
#define ANGLE_4_5000  (RPM_MIC_5000 / 3600 * 330)
#define ANGLE_4_5250  (RPM_MIC_5250 / 3600 * 330)
#define ANGLE_4_5500  (RPM_MIC_5500 / 3600 * 330)
#define ANGLE_4_5750  (RPM_MIC_5750 / 3600 * 330)
#define ANGLE_4_6000  (RPM_MIC_6000 / 3600 * 330)
#define ANGLE_4_6250  (RPM_MIC_6250 / 3600 * 325)
#define ANGLE_4_6500  (RPM_MIC_6500 / 3600 * 320)
#define ANGLE_4_6750  (RPM_MIC_6750 / 3600 * 310)
#define ANGLE_4_7000  (RPM_MIC_7000 / 3600 * 300)



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


// Переводим обороты в микросекунды
#define RPM_MIC_700 (TIME_FOR_RPM_COUNT / RPM_700)
#define RPM_MIC_1000 (TIME_FOR_RPM_COUNT / RPM_1000)
#define RPM_MIC_1250 (TIME_FOR_RPM_COUNT / RPM_1250)
#define RPM_MIC_1500 (TIME_FOR_RPM_COUNT / RPM_1500)
#define RPM_MIC_1750 (TIME_FOR_RPM_COUNT / RPM_1750)
#define RPM_MIC_2000 (TIME_FOR_RPM_COUNT / RPM_2000)
#define RPM_MIC_2250 (TIME_FOR_RPM_COUNT / RPM_2250)
#define RPM_MIC_2500 (TIME_FOR_RPM_COUNT / RPM_2500)
#define RPM_MIC_2750 (TIME_FOR_RPM_COUNT / RPM_2750)
#define RPM_MIC_3000 (TIME_FOR_RPM_COUNT / RPM_3000)
#define RPM_MIC_3250 (TIME_FOR_RPM_COUNT / RPM_3250)
#define RPM_MIC_3500 (TIME_FOR_RPM_COUNT / RPM_3500)
#define RPM_MIC_3750 (TIME_FOR_RPM_COUNT / RPM_3750)
#define RPM_MIC_4000 (TIME_FOR_RPM_COUNT / RPM_4000)
#define RPM_MIC_4250 (TIME_FOR_RPM_COUNT / RPM_4250)
#define RPM_MIC_4500 (TIME_FOR_RPM_COUNT / RPM_4500)
#define RPM_MIC_4750 (TIME_FOR_RPM_COUNT / RPM_4750)
#define RPM_MIC_5000 (TIME_FOR_RPM_COUNT / RPM_5000)
#define RPM_MIC_5250 (TIME_FOR_RPM_COUNT / RPM_5250)
#define RPM_MIC_5500 (TIME_FOR_RPM_COUNT / RPM_5500)
#define RPM_MIC_5750 (TIME_FOR_RPM_COUNT / RPM_5750)
#define RPM_MIC_6000 (TIME_FOR_RPM_COUNT / RPM_6000)
#define RPM_MIC_6250 (TIME_FOR_RPM_COUNT / RPM_6250)
#define RPM_MIC_6500 (TIME_FOR_RPM_COUNT / RPM_6500)
#define RPM_MIC_6750 (TIME_FOR_RPM_COUNT / RPM_6750)
#define RPM_MIC_7000 (TIME_FOR_RPM_COUNT / RPM_7000)

// назначаем переменные

//переменные угла опережения
int  ANGLE_700 = ANGLE_4_700;
int  ANGLE_1000 = ANGLE_4_1000 ;
int  ANGLE_1250 = ANGLE_4_1250 ;
int  ANGLE_1500 = ANGLE_4_1500 ;
int  ANGLE_1750 = ANGLE_4_1750 ;
int  ANGLE_2000 = ANGLE_4_2000 ;
int  ANGLE_2250 = ANGLE_4_2250 ;
int  ANGLE_2500 = ANGLE_4_2500 ;
int  ANGLE_2750 = ANGLE_4_2750 ;
int  ANGLE_3000 = ANGLE_4_3000 ;
int  ANGLE_3250 = ANGLE_4_3250 ;
int  ANGLE_3500 = ANGLE_4_3500 ;
int  ANGLE_3750 = ANGLE_4_3750 ;
int  ANGLE_4000 = ANGLE_4_4000 ;
int  ANGLE_4250 = ANGLE_4_4250 ;
int  ANGLE_4500 = ANGLE_4_4500 ;
int  ANGLE_4750 = ANGLE_4_4750 ;
int  ANGLE_5000 = ANGLE_4_5000 ;
int  ANGLE_5250 = ANGLE_4_5250 ;
int  ANGLE_5500 = ANGLE_4_5500 ;
int  ANGLE_5750 = ANGLE_4_5750 ;
int  ANGLE_6000 = ANGLE_4_6000 ;
int  ANGLE_6250 = ANGLE_4_6250 ;
int  ANGLE_6500 = ANGLE_4_6500 ;
int  ANGLE_6750 = ANGLE_4_6750 ;
int  ANGLE_7000 = ANGLE_4_7000;

unsigned long loadtime;         // Переменная для расчёта времени впуска.
unsigned long oldtime;         // Переменная для расчёта RPM.
unsigned long diffTime;        // Переменная для расчёта RPM.
unsigned long rpm;
unsigned long VMTtime = 0;         // Время достижения ВМТ (вход шторки в датчик). Текущее время, за вычетом времени на дёргание ногами
unsigned long nextIgnition = 0; // Время, в которое надо подать искру, если используется временной сдвиг
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
  
  rpm = VMTtime - oldtime;  // так как мы считаем все в микросекундах и ушли от градусов и оборотов , то для удобства , чтоб не переписывать программу , просто приравниваю переменную оборотов в времени вмт.
  oldtime = VMTtime;
  MapTime = VMTtime + rpm / 4; // вычисляем время середены такта впуска.
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
      if (Map > MapMax) {
        MapMax = Map;
      }
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


void AngleCalc() { // Функция расчета угла опережения от оборотов.
  if (rpm > RPM_MIC_4000) {                    // Если обороты больше 4000
    if (rpm > RPM_MIC_6000) {                  // Если обороты больше 6000
      if (rpm > RPM_MIC_6500) {                // Если обороты более 6500
        if (rpm > RPM_MIC_6750) {                // Если обороты более 6750
          if (rpm > RPM_MIC_7000) {                // Если обороты более 7000
            return;                             //Выход без расчета, искра в вмт
          }
          else {           // Если обороты меньше или ровно 7000 и обороты больше 6750
            ignitionDegree = map(rpm, RPM_MIC_6750, RPM_MIC_7000, ANGLE_6750, ANGLE_7000); //-ignitionLoad; // устанавливаем  угол в пределах
          }

        }
        else {           // Если обороты меньше или ровно 6750 и обороты больше 6500
          ignitionDegree = map(rpm, RPM_MIC_6500, RPM_MIC_6750, ANGLE_6500, ANGLE_6750); //-ignitionLoad; // устанавливаем  угол в пределах
        }
      }
      else {           // Если обороты меньше или ровно 6500 и обороты больше 6000
        if (rpm > RPM_MIC_6250) {
          ignitionDegree = map(rpm, RPM_MIC_6250, RPM_MIC_6500, ANGLE_6250, ANGLE_6500); //-ignitionLoad; // устанавливаем  угол в пределах
        }
        else {           // Если обороты меньше или ровно 6250 и обороты больше 6000
          ignitionDegree = map(rpm, RPM_MIC_6000, RPM_MIC_6250, ANGLE_6000, ANGLE_6250); //-ignitionLoad; // устанавливаем  угол в пределах
        }
      }
    }

    else {           // Если обороты меньше или ровно 6000 и обороты больше 4000
      if (rpm > RPM_MIC_5000) {                // Если обороты более 5000
        if (rpm > RPM_MIC_5500) {                // Если обороты более 5500
          if (rpm > RPM_MIC_5750) {                // Если обороты более 5750 и меньше или ровно 6000
            ignitionDegree = map(rpm, RPM_MIC_5750, RPM_MIC_6000, ANGLE_5750, ANGLE_6000); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 5750 и обороты больше 5500
            ignitionDegree = map(rpm, RPM_MIC_5500, RPM_MIC_5750, ANGLE_5500, ANGLE_5750); //-ignitionLoad; // устанавливаем  угол в пределах
          }

        }
        else {           // Если обороты меньше или ровно 5500 и обороты больше 5000
          if (rpm > RPM_MIC_5250) {                // Если обороты более 5250 и меньше или ровно 5500
            ignitionDegree = map(rpm, RPM_MIC_5250, RPM_MIC_5500, ANGLE_5250, ANGLE_5500); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 5250 и обороты больше 5000
            ignitionDegree = map(rpm, RPM_MIC_5000, RPM_MIC_5250, ANGLE_5000, ANGLE_5250); //-ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
      else {           // Если обороты меньше или ровно 5000 и обороты больше 4000
        if (rpm > RPM_MIC_4500) {                // Если обороты более 4500
          if (rpm > RPM_MIC_4750) {                // Если обороты более 4750 и меньше или ровно 5000
            ignitionDegree = map(rpm, RPM_MIC_4750, RPM_MIC_5000, ANGLE_4750, ANGLE_5000); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 4750 и обороты больше 4500
            ignitionDegree = map(rpm, RPM_MIC_4500, RPM_MIC_4750, ANGLE_4500, ANGLE_4750); //-ignitionLoad; // устанавливаем  угол в пределах
          }

        }
        else {           // Если обороты меньше или ровно 4500 и обороты больше 4000
          if (rpm > RPM_MIC_4250) {                // Если обороты более 4250 и меньше или ровно 4500
            ignitionDegree = map(rpm, RPM_MIC_4250, RPM_MIC_4500, ANGLE_4250, ANGLE_4500); //-ignitionLoad; // устанавливаем  угол в пределах
          }
          else {           // Если обороты меньше или ровно 4250 и обороты больше4500
            ignitionDegree = map(rpm, RPM_MIC_4000, RPM_MIC_4250, ANGLE_4000, ANGLE_4250); //-ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
    }
  }



  else {  // Если обороты меньше или ровно 4000
    if (rpm > RPM_MIC_2000) {                   // Если обороты меньше или ровно 4000 и обороты больше 2000
      if (rpm > RPM_MIC_3000) {              // Если обороты меньше или ровно 4000 и обороты больше 3000
        if (rpm > RPM_MIC_3500) {              // Если обороты меньше или ровно 4000 и обороты больше 3500
          if (rpm > RPM_MIC_3750) {              // Если обороты меньше или ровно 4000 и обороты больше 3750
            ignitionDegree = map(rpm, RPM_MIC_3750, RPM_MIC_4000, ANGLE_3750, ANGLE_4000);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 3750 и обороты больше 3500
            ignitionDegree = map(rpm, RPM_MIC_3500, RPM_MIC_3750, ANGLE_3500, ANGLE_3750);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
        else { // Если обороты меньше или ровно 3500 и обороты больше 3000
          if (rpm > RPM_MIC_3250) {              // Если обороты меньше или ровно 3500 и обороты больше 3250
            ignitionDegree = map(rpm, RPM_MIC_3250, RPM_MIC_3500, ANGLE_3250, ANGLE_3500);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 3250 и обороты больше 3000
            ignitionDegree = map(rpm, RPM_MIC_3000, RPM_MIC_3250, ANGLE_3000, ANGLE_3250);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
      else {// Если обороты меньше или ровно 3000 и обороты больше 2000
        if (rpm > RPM_MIC_2500) {              // Если обороты меньше или ровно 3000 и обороты больше 2500
          if (rpm > RPM_MIC_2750) {              // Если обороты меньше или ровно 3000 и обороты больше 2750
            ignitionDegree = map(rpm, RPM_MIC_2750, RPM_MIC_3000, ANGLE_2750, ANGLE_3000);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 2750 и обороты больше 2500
            ignitionDegree = map(rpm, RPM_MIC_2500, RPM_MIC_2750, ANGLE_2500, ANGLE_2750);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
        else { // Если обороты меньше или ровно 2500 и обороты больше 2000
          if (rpm > RPM_MIC_2250) {              // Если обороты меньше или ровно 2500 и обороты больше 2250
            ignitionDegree = map(rpm, RPM_MIC_2250, RPM_MIC_2500, ANGLE_2250, ANGLE_2500);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 2250 и обороты больше 2000
            ignitionDegree = map(rpm, RPM_MIC_2000, RPM_MIC_2250, ANGLE_2000, ANGLE_2250);// -ignitionLoad; // устанавливаем  угол в пределах
          }// конец обороты меньше или ровно 2250 и обороты больше 2000
        }   // конец обороты меньше или ровно 2500 и обороты больше 2000
      }   //конец  обороты меньше или ровно 3000 и обороты больше 2000


    }  // конец обороты меньше или ровно 4000 и обороты больше 2000
    else {// Если обороты меньше или ровно 2000 и обороты больше 0
      if (rpm > RPM_MIC_1000) {              // Если обороты меньше или ровно 2000 и обороты больше 1000
        if (rpm > RPM_MIC_1500) {              // Если обороты меньше или ровно 2000 и обороты больше 1500
          if (rpm > RPM_MIC_1750) {              // Если обороты меньше или ровно 2000 и обороты больше 1750
            ignitionDegree = map(rpm, RPM_MIC_1750, RPM_MIC_2000, ANGLE_1750, ANGLE_2000);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 1750 и обороты больше 1500
            ignitionDegree = map(rpm, RPM_MIC_1500, RPM_MIC_1750, ANGLE_1500, ANGLE_1750);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
        else { // Если обороты меньше или ровно 1500 и обороты больше 1000
          if (rpm > RPM_MIC_1250) {              // Если обороты меньше или ровно 1500 и обороты больше 1250
            ignitionDegree = map(rpm, RPM_MIC_1250, RPM_MIC_1500, ANGLE_1250, ANGLE_1500);// -ignitionLoad; // устанавливаем  угол в пределах
          }
          else { // Если обороты меньше или ровно 1250 и обороты больше 1000
            ignitionDegree = map(rpm, RPM_MIC_1000, RPM_MIC_1250, ANGLE_1000, ANGLE_1250);// -ignitionLoad; // устанавливаем  угол в пределах
          }
        }
      }
      else {// Если обороты меньше или ровно 1000 и обороты больше 0
        if (rpm > RPM_MIC_700) {              // Если обороты меньше или ровно 1000 и обороты больше 700
          ignitionDegree = map(rpm, RPM_MIC_700, RPM_MIC_1000, ANGLE_700, ANGLE_1000);// -ignitionLoad; // устанавливаем  угол в пределах
        }
        else { // Если обороты меньше или ровно 700 и обороты больше 0
          ignitionDegree = 0;
        }
      }
    }   //конец  обороты меньше или ровно 2000 и обороты больше 0000
  } // конец обороты менше или ровно 4000
}// Функция расчета угла опережения


void countIgnitionTime() { // Функция расчета времени сдвига зажигания.
  nextIgnition = VMTtime + rpm - ignitionDegree; // устанавливаем время выхода активного элемента из датчика , момент искры.
  ignitionFlagWithOffset = true;
  loadtime = VMTtime + rpm - ignitionDegree - Modul_Size; // устанавливаем время имитации шторки вхождение активного элемента в датчик
  loadRead = true;

}
 
 void loop()
 {
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
      if (ignitionDegree >= ANGLE_0_700) {    // если угол опережения больше или равен значению ANGLE_1_700. то есть 1 градус тоимеет смысл считать время опережения. В противном случает работает принудительная искра в ВМТ
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


  }


  else { // если модулятор не изменился
      if (startloop <= 1) { // Пока идет первый оборот двигателя
      startloop = startloop + 1 ;    //устанасливаем счетчик в  переменную первого полного оборота двигателя от втм
        return;    
    }

    if (micros() > (VMTtime + 1000000)) { //Отключение катушки если более 1секунд простоя
      PORTB |= (1 << 1);  //Подаем высокий уровень на Р1 отключаем катушку
    }
  }// если модулятор не изменился



 }

