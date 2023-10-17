//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface AVTHUDView : UIView
{
    UILabel *_totalLatencyLabel;	// 8 = 0x8
    UILabel *_arKitLatencyLabel;	// 16 = 0x10
    UILabel *_updateSyncLatencyLabel;	// 24 = 0x18
    UILabel *_metalLatencyLabel;	// 32 = 0x20
    UILabel *_fpsLabel;	// 40 = 0x28
    UILabel *_audioTimeLabel;	// 48 = 0x30
    UILabel *_timeBetweenARFrameLabel;	// 56 = 0x38
    UILabel *_droppedFrameLabel;	// 64 = 0x40
    UILabel *_shaderCompilationLabel;	// 72 = 0x48
    CDStruct_53ba08a1 _lastFrameData;	// 80 = 0x50
    CALayer *_arKitLatencyBar;	// 152 = 0x98
    CALayer *_updateLatencyBar;	// 160 = 0xa0
    CALayer *_metalLatencyBar;	// 168 = 0xa8
    NSMutableArray *_totalLatencyGraphLayers;	// 176 = 0xb0
    int _selectedGraphIndex;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000004aa5e
- (void)_tapAction:(id)arg1;	// IMP=0x000000000004a927
- (void)_loadSubviews;	// IMP=0x000000000004a364
- (id)_label;	// IMP=0x000000000004a1f0
- (void)_updateLatencyGraph:(CDStruct_53ba08a1 *)arg1;	// IMP=0x0000000000049b5e
- (void)_updateLatencyBar:(CDStruct_53ba08a1 *)arg1;	// IMP=0x0000000000049853
- (void)layoutSubviews;	// IMP=0x00000000000494f9
- (void)updateWithData:(CDStruct_53ba08a1)arg1;	// IMP=0x0000000000049156
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000490b8

@end

