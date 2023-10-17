//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TVSettingsNumberingSystem;

@interface TVSettingsNumberingSystemsFacade : NSObject
{
    TVSettingsNumberingSystem *_currentNumberingSystem;	// 8 = 0x8
    NSArray *_availableNumberingSystems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c3059
@property(readonly, nonatomic) NSArray *availableNumberingSystems; // @synthesize availableNumberingSystems=_availableNumberingSystems;
@property(retain, nonatomic) TVSettingsNumberingSystem *currentNumberingSystem; // @synthesize currentNumberingSystem=_currentNumberingSystem;
- (void)_reloadNumberingSystems;	// IMP=0x00100000000c2c3b
- (void)_currentLocaleDidChange;	// IMP=0x00100000000c2b24
- (void)dealloc;	// IMP=0x00100000000c29ad
- (id)init;	// IMP=0x00100000000c289f

@end

