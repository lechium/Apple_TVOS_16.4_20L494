//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, NSString;

@interface CKSubscriptionInfo : NSObject
{
    CKDatabase *_database;	// 8 = 0x8
    CKContainer *_container;	// 16 = 0x10
    CDUnknownBlockType _idHandler;	// 24 = 0x18
    NSString *_subscriptionID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000098e1f
- (id)description;	// IMP=0x0000000000098d79
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000098bcd
- (unsigned long long)hash;	// IMP=0x0000000000098b1c

@end

