//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDateTimeRange, _INPBLocationValue, _INPBRentalCar, _INPBReservation;

@protocol _INPBRentalCarReservation <NSObject>
@property(readonly, nonatomic) _Bool hasReservation;
@property(retain, nonatomic) _INPBReservation *reservation;
@property(readonly, nonatomic) _Bool hasRentalDuration;
@property(retain, nonatomic) _INPBDateTimeRange *rentalDuration;
@property(readonly, nonatomic) _Bool hasRentalCar;
@property(retain, nonatomic) _INPBRentalCar *rentalCar;
@property(readonly, nonatomic) _Bool hasPickupLocation;
@property(retain, nonatomic) _INPBLocationValue *pickupLocation;
@property(readonly, nonatomic) _Bool hasDropOffLocation;
@property(retain, nonatomic) _INPBLocationValue *dropOffLocation;
@end

