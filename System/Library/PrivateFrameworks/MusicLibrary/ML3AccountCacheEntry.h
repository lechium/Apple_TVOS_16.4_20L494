//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ML3AccountCacheEntry : NSObject
{
    NSString *_appleID;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018ddc4
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;	// IMP=0x000000000018dcf5

@end

