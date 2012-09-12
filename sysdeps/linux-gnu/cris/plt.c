#include <gelf.h>
#include "proc.h"
#include "common.h"
#include "library.h"

GElf_Addr arch_plt_sym_val(struct ltelf *lte, size_t ndx, GElf_Rela * rela)
{
	return lte->plt_addr + 0x20 + (ndx * 26);
}

void *sym2addr(Process *proc, struct library_symbol *sym)
{
	return sym->enter_addr;
}
