#include "ft_malloc.h"

void		show_pages_content(void)
{
	t_page		*page;
	t_block		*block;

	printf("\n#####################################\n\n");
	if ((page = g_pagelist))
	{
		while (page)
		{
			printf("------------------\npage %p\n", page);
			if ((block = page->blocklist))
			{
				while (block)
				{
					printf("    block %p | size = %zu\n", block, block->size);
					block = block->next;
				}
			}
			page = page->next;
		}
	}
	printf("\n");
}