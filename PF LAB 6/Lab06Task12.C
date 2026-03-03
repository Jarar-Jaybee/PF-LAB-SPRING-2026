#include <stdio.h>

int main() {
    int totalSeats = 40;
    int bookedSeats = 0;
    int continueBooking;

    while (bookedSeats < totalSeats) {
        printf("Enter 1 to book a seat or 0 to stop: ");
        scanf("%d", &continueBooking);

        if (continueBooking == 0) {
            printf("Stopping reservations early.\n");
            break;
        } else if (continueBooking == 1) {
            bookedSeats++;
            printf("Seat booked successfully. Remaining seats: %d\n", totalSeats - bookedSeats);
        } else {
            printf("Invalid input. Please enter 1 to book or 0 to stop.\n");
        }
    }

    if (bookedSeats == totalSeats) {
        printf("All seats are booked. No more reservations can be made.\n");
    }

    return 0;
}