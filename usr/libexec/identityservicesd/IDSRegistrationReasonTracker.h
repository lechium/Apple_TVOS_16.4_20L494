//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSRegistrationReasonTracker : NSObject
{
    NSMutableDictionary *_PNRReasonByUserID;	// 8 = 0x8
    long long _mostRecentIDSRegistrationReason;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000213210
- (void).cxx_destruct;	// IMP=0x0020000000213ba0
@property(nonatomic) long long mostRecentIDSRegistrationReason; // @synthesize mostRecentIDSRegistrationReason=_mostRecentIDSRegistrationReason;
@property(retain, nonatomic) NSMutableDictionary *PNRReasonByUserID; // @synthesize PNRReasonByUserID=_PNRReasonByUserID;
- (long long)getMostRecentIDSRegistrationReason;	// IMP=0x0010000000213b10
- (long long)getPNRReasonForUserUniqueIdentifier:(id)arg1;	// IMP=0x0010000000213a10
- (void)clearPNRReasonForUserUniqueIdentifier:(id)arg1;	// IMP=0x0010000000213990
- (void)setPNRReason:(long long)arg1 forUserUniqueIdentifier:(id)arg2;	// IMP=0x00100000002138e0
- (id)init;	// IMP=0x00100000002132d0

@end

