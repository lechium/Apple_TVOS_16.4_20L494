//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@interface NSLocale (HealthKit)
+ (_Bool)hk_isUSLocale;	// IMP=0x002000000008dbd5
+ (id)hk_testablePreferredLanguages;	// IMP=0x002000000008db5b
+ (void)hk_setTestPreferredLanguages:(id)arg1;	// IMP=0x002000000008daf4
+ (id)hk_testableAutoupdatingCurrentLocale;	// IMP=0x002000000008da7a
+ (id)hk_testableCurrentLocale;	// IMP=0x002000000008da00
+ (void)hk_setTestLocale:(id)arg1;	// IMP=0x002000000008d9be
- (_Bool)hk_isEquivalent:(id)arg1;	// IMP=0x001000000008dc64
@property(readonly, nonatomic) _Bool hk_isUSLocale;
@end
