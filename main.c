#include <reg52.h>

void delay(unsigned int t)
{
	while(--t);
}

	sbit lineBottom = P2^5;
	sbit lineCenter = P2^4;
	sbit lineTop = P2^3;
	
	sbit columnLeft1 = P0^1;
	sbit columnLeft2 = P0^2;
	sbit columnLeft3 = P0^3;
	sbit columnCenter1 = P0^4;
	sbit columnCenter2 = P0^5;
	sbit columnCenter3 = P0^6;
	sbit columnRight1 = P0^7;
	sbit columnRight2 = P2^7;
	sbit columnRight3 = P2^6;

void onAllLed(void);
void offAllLed(void);
void stepLinesLed(int steps);
void stepColumnsLed(int steps);
void stepDiagonaleLed(int steps);
void reverseStepLinesLed(int steps);
void reverseStepDiagonaleLed(int steps);
void reverseStepColumnsLed(int steps);

void main(void)
{
stepLinesLed(2);
reverseStepLinesLed(2);
stepColumnsLed(2);
reverseStepColumnsLed(2);
stepDiagonaleLed(2);
reverseStepDiagonale(2);	
}

void reverseStepLinesLed(int steps)
{
	onAllLed();
	
	while(steps--){
	
	lineTop = 0;
	delay(50000);
	lineTop = 1;
		
	lineCenter = 0;
	delay(50000);
	lineCenter = 1;
	
	lineBottom = 0;
	delay(50000);
	lineBottom = 1;
	}
	
	offAllLed();
}

void reverseStepDiagonale(int steps)
{
  while(steps--){
	lineBottom = 0;
	columnRight1 = 1;
	columnRight2 = 1;
	columnRight3 = 1;
	
	delay(50000);
	
	lineBottom = 1;
	columnRight1 = 0;
	columnRight2 = 0;
	columnRight3 = 0;
	
	lineCenter = 0;
	columnCenter1 = 1;
	columnCenter2 = 1;
	columnCenter3 = 1;
	
	delay(50000);
	
	lineCenter = 1;
	columnCenter1 = 0;
	columnCenter2 = 0;
	columnCenter3 = 0;
	
	lineTop = 0;
	columnLeft1 = 1;
	columnLeft2 = 1;
	columnLeft3 = 1;
	
	delay(50000);
	
	lineTop = 1;
	columnLeft1 = 0;
	columnLeft2 = 0;
	columnLeft3 = 0;
	}
}

void reverseStepColomnsLed(int steps)
{
	lineTop = 0;
	lineCenter = 0;
	lineBottom = 0;
	
	while(steps--){
	columnRight1 = 1;
	columnRight2 = 1;
	columnRight3 = 1;
	delay(50000);
	columnRight1 = 0;
	columnRight2 = 0;
	columnRight3 = 0;
		
	columnCenter1 = 1;
	columnCenter2 = 1;
	columnCenter3 = 1;
	delay(50000);
	columnCenter1 = 0;
	columnCenter2 = 0;
	columnCenter3 = 0;
		
	columnLeft1 = 1;
	columnLeft2 = 1;
	columnLeft3 = 1;
	delay(50000);
	columnLeft1 = 0;
	columnLeft2 = 0;
	columnLeft3 = 0;
	}
	
	lineTop = 1;
	lineCenter = 1;
	lineBottom = 1;
}
void stepLinesLed(int steps)
{	
	onAllLed();
	
	while(steps--){
	lineBottom = 0;
	delay(50000);
	lineBottom = 1;
	
	lineCenter = 0;
	delay(50000);
	lineCenter = 1;
	
	lineTop = 0;
	delay(50000);
	lineTop = 1;
	}
	
	offAllLed();
}
void stepDiagonaleLed(int steps)
{
	while(steps--){
	lineBottom = 0;
	columnLeft1 = 1;
	columnLeft2 = 1;
	columnLeft3 = 1;
	
	delay(50000);
	
	lineBottom = 1;
	columnLeft1 = 0;
	columnLeft2 = 0;
	columnLeft3 = 0;
	
	lineCenter = 0;
	columnCenter1 = 1;
	columnCenter2 = 1;
	columnCenter3 = 1;
	
	delay(50000);
	
	lineCenter = 1;
	columnCenter1 = 0;
	columnCenter2 = 0;
	columnCenter3 = 0;
	
	lineTop = 0;
	columnRight1 = 1;
	columnRight2 = 1;
	columnRight3 = 1;
	
	delay(50000);
	
	lineTop = 1;
	columnRight1 = 0;
	columnRight2 = 0;
	columnRight3 = 0;
	}
}

void stepColumnsLed(int steps)
{
	lineTop = 0;
	lineCenter = 0;
	lineBottom = 0;
	
	while(steps--){
	columnLeft1 = 1;
	columnLeft2 = 1;
	columnLeft3 = 1;
	delay(50000);
	columnLeft1 = 0;
	columnLeft2 = 0;
	columnLeft3 = 0;
		
	columnCenter1 = 1;
	columnCenter2 = 1;
	columnCenter3 = 1;
	delay(50000);
	columnCenter1 = 0;
	columnCenter2 = 0;
	columnCenter3 = 0;
		
	columnRight1 = 1;
	columnRight2 = 1;
	columnRight3 = 1;
	delay(50000);
	columnRight1 = 0;
	columnRight2 = 0;
	columnRight3 = 0;
	}
	
	lineTop = 1;
	lineCenter = 1;
	lineBottom = 1;
}

void onAllLed(void)
{
	columnLeft1 = 1;
	columnLeft2 = 1;
	columnLeft3 = 1;
	columnCenter1 = 1;
	columnCenter2 = 1;
	columnCenter3 = 1;
	columnRight1 = 1;
	columnRight2 = 1;
	columnRight3 = 1;
}

void offAllLed(void)
{
	columnLeft1 = 0;
	columnLeft2 = 0;
	columnLeft3 = 0;
	columnCenter1 = 0;
	columnCenter2 = 0;
	columnCenter3 = 0;
	columnRight1 = 0;
	columnRight2 = 0;
	columnRight3 = 0;
}



