//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIContentRatingBadgeDescriptor : NSObject
{
    _Bool _templatedImage;	// 8 = 0x8
    NSString *_resourceName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c82f
@property(readonly, nonatomic, getter=isTemplatedImage) _Bool templatedImage; // @synthesize templatedImage=_templatedImage;
@property(readonly, copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (id)initWithResourceName:(id)arg1 isTemplatedImage:(_Bool)arg2;	// IMP=0x000000000001c79e

@end

