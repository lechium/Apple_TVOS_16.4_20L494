//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADConferenceUtils : NSObject
{
}

+ (id)_extractURLStringsFromCalEvent:(void *)arg1;	// IMP=0x0080000000056902
+ (id)_conferenceURLsToRenewWithDatabase:(struct CalDatabase *)arg1 URLString:(id)arg2;	// IMP=0x00800000000560bb
+ (_Bool)_performConferenceURLRenewalWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x00800000000560b3
+ (void)removeNextConferenceLinkRenewalDate;	// IMP=0x0080000000056029
+ (void)setNextConferenceLinkRenewalDate:(id)arg1;	// IMP=0x0080000000055f37
+ (void)performConferenceLinkRenewalIfNeeded;	// IMP=0x0080000000055a8c

@end
