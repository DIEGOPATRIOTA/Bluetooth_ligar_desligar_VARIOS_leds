/**
 * Projetos Arduino
 * 
 * @author diego patriota
 * @link https://github.com/diegopatriota
 * 19/05/2016 
 */

//Variáveis
int led1 = 10; /* pinno 10 */
int led3 = 12; /* pinno 12 */
int led2 = 11; /* pinno 11 */
int led4 = 13; /* pinno 13 */

//estado inicial 
int estado1 = LOW; 
int estado2 = LOW;
int estado3 = LOW;
int estado4 = LOW;
  
char leitura;
  
//Configuração inicial  
void setup(){
  
  Serial.begin(9600);
  
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}
  
//Loop para execução do código   
void loop(){
  
  if(Serial.available()){
  
    leitura = Serial.read();
  
	if(leitura == '1'){
	  
	  estado1 = !estado1;
	}
  
	if(leitura == '2'){
	  
	  estado2 = !estado2;
	}
  
	if(leitura == '3'){
	  
	  estado3 = !estado3;
	}
  
	if(leitura == '4'){
	  
	  estado4 = !estado4;
	}
 }
 digitalWrite(led1, estado1);
 digitalWrite(led2, estado2);
 digitalWrite(led3, estado3);
 digitalWrite(led4, estado4);
} 
