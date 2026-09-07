# movie-ticket-system-design-504
# Movie Ticket Booking System (C++)

## Project Overview

The **Movie Ticket Booking System** is a menu-driven C++ console application designed for a single cinema.  
The system allows customers to view movies, select shows, check seat availability, book seats, make payments, generate tickets, and cancel bookings.

The project is developed using **Object-Oriented Programming (OOP)** concepts with modular class design.

---

# Features Implemented

### F1 - List Movies Currently Playing
- Displays all movies available in the cinema.
- Shows movie details such as title, language, and duration.

### F2 - Display Shows
- Allows users to select a movie.
- Displays available shows with:
  - Screen number
  - Show start time

### F3 - Seat Layout Display
- Displays seats for a selected show.
- Shows seat status:
  - AVAILABLE
  - BOOKED

### F4 - Book Seats
- Allows booking of one or more seats.
- Prevents booking of already reserved seats.

### F5 - Seat Type Pricing

| Seat Type | Price |
|-----------|-------|
| SILVER | ₹150 |
| GOLD | ₹250 |
| PLATINUM | ₹400 |

### F6 - Payment System
Supported payment methods:

- UPI
- Card
- Cash

If payment fails:
- Booking is cancelled.
- Seats become available again.

### F7 - Ticket Generation
Generated ticket contains:

- Booking ID
- Movie name
- Screen number
- Show time
- Seat numbers
- Total amount

### F8 - Cancel Booking
- Allows cancellation of confirmed bookings.
- Releases booked seats back to AVAILABLE status.

---

# Object-Oriented Design

## Classes Used

### Movie
Responsibility:
- Stores movie information.

Data:
- Title
- Language
- Duration


### Seat
Responsibility:
- Represents one physical cinema seat.

Data:
- Seat number
- Seat type


### Screen
Responsibility:
- Represents an auditorium screen.
- Owns seats.


### Cinema
Responsibility:
- Represents the theatre.
- Manages screens.


### Show
Responsibility:
- Represents a movie screening.
- Connects Movie, Screen, and ShowSeat.


### ShowSeat
Responsibility:
- Maintains seat availability for a specific show.


### Customer
Responsibility:
- Stores customer details.


### Booking
Responsibility:
- Creates and manages reservations.
- Generates tickets.


### Payment
Responsibility:
- Handles payment processing.


### UpiPayment
Responsibility:
- Implements UPI payment method.


### BookingService
Responsibility:
- Coordinates booking operations.

---

# Project Structure
MovieTicketBookingSystem/

│
├── main.cpp
│
├── Movie.h
├── Movie.cpp
│
├── Seat.h
├── Seat.cpp
│
├── Screen.h
├── Screen.cpp
│
├── Cinema.h
├── Cinema.cpp
│
├── Show.h
├── Show.cpp
│
├── ShowSeat.h
├── ShowSeat.cpp
│
├── Customer.h
├── Customer.cpp
│
├── Booking.h
├── Booking.cpp
│
├── Payment.h
├── Payment.cpp
│
├── UpiPayment.h
├── UpiPayment.cpp
│
├── BookingService.h
└── BookingService.cpp

---

# Technologies Used

- Language: C++
- Programming Paradigm: Object-Oriented Programming
- Compiler: GCC / MinGW
- Platform: Console Application

---

# SOLID Principles Applied

## Single Responsibility Principle (SRP)
Each class has only one responsibility.

Example:
- Seat handles seat information.
- Payment handles payment processing.

## Open/Closed Principle (OCP)
New payment methods can be added without modifying existing payment code.

Example:
- CardPayment
- CashPayment

can be added easily.

## Liskov Substitution Principle (LSP)
Payment subclasses can replace the parent Payment class.

## Interface Segregation Principle (ISP)
Classes contain only required methods.

## Dependency Inversion Principle (DIP)
High-level modules depend on abstractions instead of concrete implementations.

---

# Compilation Instructions

Compile all files:

```bash
g++ main.cpp Movie.cpp Seat.cpp Screen.cpp Cinema.cpp Show.cpp ShowSeat.cpp Customer.cpp Booking.cpp Payment.cpp UpiPayment.cpp BookingService.cpp -o MovieSystem
