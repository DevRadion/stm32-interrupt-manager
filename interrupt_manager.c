#include "interrupt_manager.h"

volatile InterruptHandler it_handler;

void interrupt_manager_handle_interrupt(InterruptLine line)
{
	it_handler(&line);
}

void interrupt_manager_register_handler(InterruptHandler handler)
{
	it_handler = handler;
}