//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIDatePickerCalendarTimeFormat;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeValueStore : NSObject
{
    _Bool _isPM;	// 8 = 0x8
    long long _minuteInterval;	// 16 = 0x10
    long long _decrementBehaviour;	// 24 = 0x18
    unsigned long long *_inputBuffer;	// 32 = 0x20
    _UIDatePickerCalendarTimeFormat *_timeFormat;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000011d7b54
@property(readonly, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat; // @synthesize timeFormat=_timeFormat;
@property(readonly, nonatomic) unsigned long long *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property(nonatomic) long long decrementBehaviour; // @synthesize decrementBehaviour=_decrementBehaviour;
@property(nonatomic) long long minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(nonatomic) _Bool isPM; // @synthesize isPM=_isPM;
- (void)decrementDigitForScope:(long long)arg1;	// IMP=0x00000000011d7979
- (void)incrementDigitForScope:(long long)arg1;	// IMP=0x00000000011d77fc
- (_Bool)roundToMinuteInterval;	// IMP=0x00000000011d7785
@property(nonatomic) unsigned long long minuteValue;
@property(nonatomic) unsigned long long hourValue;
- (void)removeLastDigitInScope:(long long)arg1;	// IMP=0x00000000011d76d9
- (unsigned long long)digitsInScope:(long long)arg1;	// IMP=0x00000000011d7699
- (void)setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inScope:(long long)arg3 append:(_Bool)arg4;	// IMP=0x00000000011d7623
- (void)_removeLastDigitInRange:(struct _NSRange)arg1;	// IMP=0x00000000011d75d0
- (void)_setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inRange:(struct _NSRange)arg3 append:(_Bool)arg4;	// IMP=0x00000000011d750b
- (unsigned long long)__integerInBufferWithRange:(struct _NSRange)arg1;	// IMP=0x00000000011d74ac
- (void)__setIntegerInBuffer:(unsigned long long)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000011d7437
- (void)_verifyInputWithScope:(long long)arg1;	// IMP=0x00000000011d7307
- (void)dealloc;	// IMP=0x00000000011d72ae
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2 decrementBehaviour:(long long)arg3;	// IMP=0x00000000011d720d
- (id)initWithTimeFormat:(id)arg1;	// IMP=0x00000000011d71f3

@end

