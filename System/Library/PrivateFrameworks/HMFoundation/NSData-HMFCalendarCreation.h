//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSArray, NSString;

@interface NSData (HMFCalendarCreation)
+ (id)shortDescription;	// IMP=0x00100000000089b3
- (id)decodeCalendar;	// IMP=0x001000000000389f
- (id)decodeArrayOfDateComponents;	// IMP=0x00100000000037fb
- (id)decodeDateComponents;	// IMP=0x00100000000037dd
- (id)hmf_zeroingCopy;	// IMP=0x00100000000077c8
@property(readonly) NSString *hmf_hexadecimalRepresentation;
- (id)hmf_hexadecimalStringWithOptions:(unsigned long long)arg1;	// IMP=0x0010000000008f62
- (id)hmf_initWithHexadecimalString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000008d17
@property(readonly, getter=hmf_isZeroed) _Bool hmf_zeroed;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)decodeTimeZone;	// IMP=0x00100000000292bd

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end

