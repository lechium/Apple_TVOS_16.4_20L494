//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, _UIStatusBarData, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarItemUpdate : NSObject
{
    _Bool _enabilityChanged;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    _Bool _dataChanged;	// 10 = 0xa
    _Bool _styleAttributesChanged;	// 11 = 0xb
    _UIStatusBarData *_data;	// 16 = 0x10
    _UIStatusBarStyleAttributes *_styleAttributes;	// 24 = 0x18
    NSDictionary *_placementInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000d5efd8
@property(retain, nonatomic) NSDictionary *placementInfo; // @synthesize placementInfo=_placementInfo;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(nonatomic) _Bool styleAttributesChanged; // @synthesize styleAttributesChanged=_styleAttributesChanged;
@property(retain, nonatomic) _UIStatusBarData *data; // @synthesize data=_data;
@property(nonatomic) _Bool dataChanged; // @synthesize dataChanged=_dataChanged;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool enabilityChanged; // @synthesize enabilityChanged=_enabilityChanged;
- (id)description;	// IMP=0x0000000000d5ed87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d5ecdb

@end

