/*
Program that computes the payroll for a company for N employees. Daily Pay for per employee will be calculated as pay=hours*rate.
For each employee, the number of hours worked per day and the number of days worked a week will be entered by user.
Rates values will be entered by users for each employee.
Program will print the total payroll for company and calculate the average daily cost of workers and print it on the screen.
*/

#include <stdio.h>

int main()
{
  int N;
  int hour;
  float rate;
  int day;
  int pay;
  int ttlpay;
  int payroll;
  int count = 0;

  printf("How many employees are working in the company? ");
  scanf("%d", &N);

  printf("How many hours a employee works per day? ");
  scanf("%d", &hour);

  printf("What is the rate for a employee? ");
  scanf("%f", &rate);

  printf("How many days does a employee  work in a week? ");
  scanf("%d", &day);

  pay = hour * rate;
  printf("The daily pay for per employee:$ %d\n", pay);

  ttlpay = N * pay;
  printf("The daily pay for company:$ %d\n", ttlpay);

  while (count++ <= N)
  {
    payroll = ttlpay * day;
  }
  printf("The totall payroll for company:$ %d\n", payroll);

  getch();
  return 0;
}
