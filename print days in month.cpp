#include <stdio.h>
int main()
{
	int month;
	printf("Enter the number  of a month:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("31 days");
			break;
			case 2:
				printf("28 days or 29 days  in leap year");
				break;
				case 3:
					printf("31 days");
					break;
					case 4:
						printf("30 days");
						break;
						case 5:
							printf("31 days");
							break;
								case 6:
									printf("30 days");
									break;
									case 7:
										printf("31 days");
										break;
										case 8:
											printf("30 days");
											break;
												case 9:
													printf("31 days");
													break;
													case 10:
														printf("30 days");
														break;
														case 11:
															printf("31 days");
															break;
															case 12:
															printf("30 days");
															break;
															default:
															printf("Enter valid month");
																}
}
