//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMethodSignature;

__attribute__((visibility("hidden")))
@interface _NADelegateMethodMetadata : NSObject
{
    NSMethodSignature *_methodSignature;	// 8 = 0x8
    CDUnknownBlockType _customHandler;	// 16 = 0x10
    NSDictionary *_customLogSettingsByArgumentIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000fa25
@property(copy, nonatomic) NSDictionary *customLogSettingsByArgumentIndex; // @synthesize customLogSettingsByArgumentIndex=_customLogSettingsByArgumentIndex;
@property(copy, nonatomic) CDUnknownBlockType customHandler; // @synthesize customHandler=_customHandler;
@property(retain, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;

@end

