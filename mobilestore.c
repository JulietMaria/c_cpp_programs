/*c project (mobile store using structures)*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct mobile
{
  int mcode;
  char mname[15];
  int mprice;

};
int
main ()
{
  char ju[20], lu[10];
  int jp, lp, c, jp1, choice;
  int itemcode[5], itemquantity[5], i = 0, j, k, total = 0;
  int yn, flag = 0;
  char uname0[] = "Nivedhitha";
  char uname1[] = "Juliet";
  char uname2[] = "Nivetha";
  char uname3[] = "Keerthisri";
  char uname4[] = "Jayashree";
  char uname5[] = "Nitiksha";
  int p1 = 123;
  int p2 = 345;
  int p3 = 567;
  int p4 = 789;
  int p5 = 910;
  int p6 = 100;
  printf ("______________WELCOME TO MOBILEMALL_________________\n");
  printf ("press 1 to login\n");
  printf ("press 2 to sign up\n");
  scanf ("%d", &choice);
  switch (choice)
    {
    case 1:
      printf ("Enter username:\n");
      scanf ("%s", lu);
      printf ("Enter password:\n");
      scanf ("%d", &lp);
      if (((strcmp (uname0, lu) == 0) && (lp == p1))
	  || ((strcmp (uname1, lu) == 0) && (lp == p2))
	  || ((strcmp (uname2, lu) == 0) && (lp == p3))
	  || ((strcmp (uname3, lu) == 0) && (lp == p4))
	  || ((strcmp (uname1, lu) == 0) && (lp == p5))
	  || ((strcmp (uname5, lu) == 0) && (lp == p6)))
	{
	  printf ("Welcome %s\n", lu);
	}
      else
	{
	  printf ("the password dont seem to match please try again later\n");
	  exit (0);
	}
      break;
    case 2:
      printf ("enter the username:\n");
      scanf ("%s", &ju);
      printf
	("password is accepted in the form of numbers\n Do not diclose to anyone\n DO NOT keep something obvious.\n");
      printf ("create password\n");
      scanf ("%d", &jp);
      printf ("confirm password\n");
      scanf ("%d", &jp1);
      if (jp == jp1)
	{
	  printf ("welcome\n");
	}
      else
	{
	  printf ("Exiting due to Error");
	  exit (0);
	}
    }

  struct mobile phone[5];
  phone[0].mcode = 101;
  strcpy (phone[0].mname, "samsung s9");
  phone[0].mprice = 89000;

  phone[1].mcode = 102;
  strcpy (phone[1].mname, "redmi 5A");
  phone[1].mprice = 7000;

  phone[2].mcode = 103;
  strcpy (phone[2].mname, "iphoneX");
  phone[2].mprice = 120000;

  phone[3].mcode = 104;
  strcpy (phone[3].mname, "pixel2");
  phone[3].mprice = 85000;

  phone[4].mcode = 105;
  strcpy (phone[4].mname, "vivov7");
  phone[4].mprice = 25000;

  printf ("Trending Smartphones\n");
  for (i = 0; i < 5; i++)
    {
      printf ("Product code: %d\n", phone[i].mcode);
      printf ("Name of the product: %s\n", phone[i].mname);
      printf ("Price of Product: %d\n", phone[i].mprice);
      printf ("---------------------------------------\n");
    }

  i = 0;
  yn = 1;
  do
    {
      printf ("Enter mobile code : ");
      scanf ("%d", &itemcode[i]);
      flag = 0;
      for (j = 0; j < 5; j++)
	{
	  if (phone[j].mcode != itemcode[i])
	    {
	      flag = 0;
	    }
	  else
	    {
	      flag = 1;
	      break;
	    }
	}
      if (flag == 0)
	{
	  printf ("items does not exist, enter a valid code");
	  continue;
	}

      printf ("Enter quantity : ");
      scanf ("%d", &itemquantity[i]);
      printf
	("Do you want to buy any more products Press 1 to buy else press 0 : ");
      scanf ("%d", &yn);
      i++;
    }
  while (yn == 1);

  for (j = 0; j < i; j++)
    {
      for (k = 0; k < 5; k++)
	{
	  if (phone[k].mcode == itemcode[j])
	    {
	      printf ("==================Bill===================\n");
	      printf ("mobile code: %d\tmobilename:%s\tprice:%d\n",
		      phone[k].mcode, phone[k].mname,
		      phone[k].mprice * itemquantity[j]);
	      total = total + phone[k].mprice * itemquantity[j];
	      printf ("your total transaction is worth:\t%d\n", total);
	    }
	}


    }
  printf ("Select Your Mode of Payment\n");
  printf ("1. Cash on delivery\n");
  printf ("2.Pay through card\n");
  int py;
  char add[100];
  long int card;
  printf ("enter an option\n");
  scanf ("%d", &py);
  if (py == 1)
    {
      printf ("Enter your Address\n");
      scanf ("%s", &add);
    }
  else
    {
      printf ("Enter your visa card number\n");
      scanf ("%li", &card);
      printf ("Enter your Address\n");
      
      scanf ("%s", &add);


    }
  printf ("your phones shall arrive in 4 days\n");
  printf ("______________Thank You for Shopping______________________\n");
  return 0;
}


