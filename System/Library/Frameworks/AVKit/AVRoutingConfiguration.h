//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVRoutingConfiguration : NSObject
{
    _Bool _isDefault;	// 8 = 0x8
    NSString *_outputContextID;	// 16 = 0x10
}

+ (id)defaultConfiguration;	// IMP=0x0060000000054b29
- (void).cxx_destruct;	// IMP=0x0000000000054b19
@property(readonly, nonatomic) NSString *outputContextID; // @synthesize outputContextID=_outputContextID;
- (_Bool)isDefault;	// IMP=0x0000000000054b06

@end

