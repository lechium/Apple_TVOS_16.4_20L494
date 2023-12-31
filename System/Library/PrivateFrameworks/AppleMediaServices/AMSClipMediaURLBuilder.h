//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSClipMediaURLBuilder : NSObject
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_externalVersionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bdffa
@property(retain, nonatomic) NSNumber *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)_queryPromise;	// IMP=0x00000000001bdb9a
- (id)_pathPromise;	// IMP=0x00000000001bd7bf
- (id)_hostPromise;	// IMP=0x00000000001bd73e
- (id)_devicePlatform;	// IMP=0x00000000001bd700
- (id)build;	// IMP=0x00000000001bd474
- (id)initWithBundleID:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001bd3db

@end

