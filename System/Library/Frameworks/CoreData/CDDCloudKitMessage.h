//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface CDDCloudKitMessage : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001806f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000180771
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001806fb
- (void)dealloc;	// IMP=0x00000000001806b8
- (id)init;	// IMP=0x000000000018066c

@end
