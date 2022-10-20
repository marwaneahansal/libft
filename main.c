#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	// t_list *secondeStruct = ft_lstnew("Seconde Struct!");
	// t_list *nullList = 0;
	// ft_lstadd_front(&nullList, secondeStruct);

	// while (nullList)
	// {
	// 	printf("content ==> %s\n", (char *) nullList->content);
	// 	nullList = nullList->next;
	// }


	// // t_list *listPtr = 0;
	// t_list *firstList = ft_lstnew("First Struct!");
	
	// // listPtr = firstList;
	// // ft_lstadd_front(listPtr, firstList);
	// t_list *secondeStruct = ft_lstnew("Seconde Struct!");
	// t_list *thirdStruct = ft_lstnew("Third Struct!");
	// t_list *fourthStruct = ft_lstnew("Fourth Struct!");


	// ft_lstadd_front(&firstList, secondeStruct);

	// ft_lstadd_front(&firstList, thirdStruct);

	// ft_lstadd_front(&firstList, fourthStruct);
	// 
	// printf("%d\n", ft_lstsize(fourthStruct));

	// printf("last list ==> %s\n", (char *) ft_lstlast(fourthStruct)->content);

	// t_list *lastList = ft_lstnew("Last Struct!");
	// ft_lstadd_back(&fourthStruct, lastList);

	// printf("last list now ==> %s\n", (char *) ft_lstlast(fourthStruct)->content);

	// t_list *head = 0;
	// t_list *firstStruct = ft_lstnew("First Struct!");
	// t_list *secondeStruct = ft_lstnew("Seconde Struct!");
	// t_list *thirdStruct = ft_lstnew("Third Struct!");
	// t_list *fourthStruct = ft_lstnew("Fourth Struct!");
	// head = firstStruct;
	// firstStruct->next = secondeStruct;
	// secondeStruct->next = thirdStruct;
	// thirdStruct->next = fourthStruct;
	// fourthStruct->next = 0;
	
	// t_list *tmp_head = head;
	// while (tmp_head)
	// {
	// 	printf("- %s\n", (char *) tmp_head->content);
	// 	tmp_head = tmp_head->next;
	// }

	// // add this list at the end of this linked list
	// t_list	*fifthStruct = ft_lstnew("Fifth Struct");
	// // tmp_head = head;
	// // while (tmp_head)
	// // {
	// // 	printf("-- %s\n", (char *) tmp_head->content);
	// // 	if (!tmp_head->next)
	// // 	{
	// // 		tmp_head->next = fifthStruct;
	// // 		fifthStruct->next = 0;
	// // 	}
	// // 	tmp_head = tmp_head->next;
	// // }
	// ft_lstadd_back(&head, fifthStruct);
	// tmp_head = head;
	// while (tmp_head)
	// {
	// 	printf("--- %s\n", (char *) tmp_head->content);
	// 	tmp_head = tmp_head->next;
	// }

	printf("-9        => %s\n", ft_itoa(-9));
	printf("-8        => %s\n", ft_itoa(-8));
	printf("109       => %s\n", ft_itoa(109));
	printf("-12679712 => %s\n", ft_itoa(-12679712));
	printf("0         => %s\n", ft_itoa(0));

	return (0);
}
