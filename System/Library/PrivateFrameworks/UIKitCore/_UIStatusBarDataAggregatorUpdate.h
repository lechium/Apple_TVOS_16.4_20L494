//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIStatusBarDataEntry;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregatorUpdate : NSObject
{
    _Bool _animated;	// 8 = 0x8
    _UIStatusBarDataEntry *_entry;	// 16 = 0x10
}

+ (id)updateWithEntry:(id)arg1;	// IMP=0x0060000000db7679
- (void).cxx_destruct;	// IMP=0x0000000000db771d
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) _UIStatusBarDataEntry *entry; // @synthesize entry=_entry;

@end

