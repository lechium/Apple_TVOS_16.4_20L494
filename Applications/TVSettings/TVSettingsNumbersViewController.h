//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsNumberingSystemsFacade;

@interface TVSettingsNumbersViewController : TSKViewController
{
    TVSettingsNumberingSystemsFacade *_numberingSystemsFacade;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000013c14
@property(retain, nonatomic) TVSettingsNumberingSystemsFacade *numberingSystemsFacade; // @synthesize numberingSystemsFacade=_numberingSystemsFacade;
- (void)_setNumberingSystem:(id)arg1;	// IMP=0x0010000000013a05
- (id)loadSettingGroups;	// IMP=0x001000000001372e
- (id)initWithNumberingSystemsFacade:(id)arg1;	// IMP=0x0010000000013604

@end

