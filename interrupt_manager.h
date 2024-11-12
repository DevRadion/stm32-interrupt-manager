#ifndef _INTERRUPT_MANAGER_H
#define _INTERRUPT_MANAGER_H

typedef enum {
	EXTI0,
	EXTI1,
	EXTI2TSC,
	EXTI3,
	EXTI4,
} InterruptLine;

typedef void(*InterruptHandler)(InterruptLine*);

void interrupt_manager_handle_interrupt(InterruptLine line);

void interrupt_manager_register_handler(InterruptHandler handler);

#endif // !_INTERRUPT_MANAGER_H
