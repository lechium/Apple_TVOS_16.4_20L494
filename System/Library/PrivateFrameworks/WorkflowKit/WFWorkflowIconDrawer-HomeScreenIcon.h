//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFWorkflowIconDrawer.h>

@interface WFWorkflowIconDrawer (HomeScreenIcon)
+ (id)pngDataForImageWithIcon:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0060000000267018
+ (id)glyphImageWithIcon:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0060000000266fc6
+ (id)imageWithIcon:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 padding:(struct CGSize)arg4 glyphColor:(id)arg5 background:(_Bool)arg6;	// IMP=0x0060000000266ed4
+ (id)imageWithIcon:(id)arg1 size:(struct CGSize)arg2 background:(_Bool)arg3;	// IMP=0x0060000000266e1a
+ (id)imageWithIcon:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0060000000266e03
- (id)initWithHomeScreenIcon:(id)arg1;	// IMP=0x0010000000175744
- (void)setIcon:(id)arg1;	// IMP=0x0010000000266d74
- (id)initWithIcon:(id)arg1 drawerContext:(id)arg2;	// IMP=0x0010000000266d00
- (id)initWithIcon:(id)arg1;	// IMP=0x0010000000266cec
@end

