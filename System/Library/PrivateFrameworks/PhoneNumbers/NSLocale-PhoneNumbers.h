//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSString;

@interface NSLocale (PhoneNumbers)
+ (id)nationalDirectDialingPrefixForISOCountryCode:(id)arg1;	// IMP=0x0020000000000b9c
+ (long long)ITUCountryCodeForISOCountryCode:(id)arg1;	// IMP=0x0020000000000b3a
@property(readonly, copy) NSString *nationalDirectDialingPrefix;
@property(readonly) long long ITUCountryCode;
@end

