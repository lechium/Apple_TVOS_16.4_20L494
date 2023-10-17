//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVExtensionPrincipalObject : NSObject
{
}

+ (void)augmentAppContextWithSystemExtensions:(id)arg1 jsContext:(id)arg2;	// IMP=0x0010000000147e84
+ (void)initialize;	// IMP=0x0010000000147230
- (void)topShelfItemPlayed:(id)arg1;	// IMP=0x0000000000147be8
- (void)topShelfItemSelected:(id)arg1;	// IMP=0x000000000014794c
- (void)provideTopShelfItems:(CDUnknownBlockType)arg1;	// IMP=0x000000000014725c
@property(readonly) NSArray *topShelfItems;
@property(readonly) long long topShelfStyle;
- (id)init;	// IMP=0x0000000000147201

@end

