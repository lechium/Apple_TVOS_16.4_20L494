//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSUIWebModel : NSObject
{
}

+ (struct CGSize)windowSizeFromJSObject:(id)arg1 key:(id)arg2;	// IMP=0x00800000000855e5
+ (struct CGSize)windowSizeFromPageModel:(id)arg1;	// IMP=0x00800000000855cc
+ (id)pageModelFromJSObject:(id)arg1 context:(id)arg2;	// IMP=0x008000000008526e
+ (id)navigationBarFromPageModel:(id)arg1 context:(id)arg2;	// IMP=0x00800000000851c5
+ (id)impressionEventFromPageModel:(id)arg1 context:(id)arg2;	// IMP=0x0080000000085104
+ (id)backgroundColorFromPageModel:(id)arg1;	// IMP=0x008000000008509a

@end

