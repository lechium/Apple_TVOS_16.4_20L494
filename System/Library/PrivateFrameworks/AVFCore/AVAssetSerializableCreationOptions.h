//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAssetSerializableCreationOptions : NSObject
{
    NSDictionary *_creationOptions;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002de58
- (id)creationOptions;	// IMP=0x000000000002e4bd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e0cf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002de60
- (void)dealloc;	// IMP=0x000000000002de1d
- (id)initWithCreationOptions:(id)arg1;	// IMP=0x000000000002ddcd

@end

