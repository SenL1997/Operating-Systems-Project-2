#include <sys/syscall.h>
#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <unistd.h>

struct pagetable_layout_info {
	uint32_t pgdir_shift;
	uint32_t pmd_shift;
	uint32_t page_shift;
};

int main(int argc, char ** argv)
{
	
	struct pagetable_layout_info pti;
	syscall(379, &pti, sizeof(struct pagetable_layout_info));
	printf("Pgd_shift = %d\n", pti.pgdir_shift);
	printf("Pmd_shift = %d\n", pti.pmd_shift);
	printf("Page_shift = %d\n", pti.page_shift);
	return 0;
	



}
