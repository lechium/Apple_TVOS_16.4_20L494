//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PBSystemIndicatorIcon : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSArray *_colors;	// 16 = 0x10
    NSString *_compositingFilter;	// 24 = 0x18
}

+ (id)iconWithName:(id)arg1 colors:(id)arg2 compositingFilter:(id)arg3;	// IMP=0x0020000000091b29
+ (id)iconWithName:(id)arg1 colors:(id)arg2;	// IMP=0x0010000000091afc
- (void).cxx_destruct;	// IMP=0x0020000000091f3d
@property(readonly, nonatomic) NSString *compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000091e1a
- (id)description;	// IMP=0x0010000000091dd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000091c15

@end
