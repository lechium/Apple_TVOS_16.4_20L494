//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarTimeItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_timeView;	// 8 = 0x8
    _UIStatusBarStringView *_shortTimeView;	// 16 = 0x10
    _UIStatusBarStringView *_pillTimeView;	// 24 = 0x18
    _UIStatusBarStringView *_dateView;	// 32 = 0x20
}

+ (id)dateDisplayIdentifier;	// IMP=0x0040000000d55a88
+ (id)pillTimeDisplayIdentifier;	// IMP=0x0040000000d55a6f
+ (id)shortTimeDisplayIdentifier;	// IMP=0x0040000000d55a56
+ (id)timeDisplayIdentifier;	// IMP=0x0040000000d55a3d
- (void).cxx_destruct;	// IMP=0x0000000000d5682e
@property(retain, nonatomic) _UIStatusBarStringView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIStatusBarStringView *pillTimeView; // @synthesize pillTimeView=_pillTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *shortTimeView; // @synthesize shortTimeView=_shortTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *timeView; // @synthesize timeView=_timeView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000d5667a
- (void)_create_dateView;	// IMP=0x0000000000d56620
- (void)_create_pillTimeView;	// IMP=0x0000000000d56530
- (void)_create_shortTimeView;	// IMP=0x0000000000d5646b
- (void)_create_timeView;	// IMP=0x0000000000d563a6
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000d55ae1
- (id)dependentEntryKeys;	// IMP=0x0000000000d55aa1

@end
