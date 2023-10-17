//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@protocol _INPBCurrencyAmountValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasCurrencyCode;
@property(copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) _Bool hasAmount;
@property(retain, nonatomic) _INPBDecimalNumberValue *amount;
@end
