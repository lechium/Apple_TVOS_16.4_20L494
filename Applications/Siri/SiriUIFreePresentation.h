//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SiriUIFreePresentation : NSObject
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    _Bool _shouldSuppressErrorTTS;	// 9 = 0x9
    id <SiriUIPresentationDataSource> _dataSource;	// 16 = 0x10
    id <SiriUIPresentationDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000741d4
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x001000000007418f
- (long long)options;	// IMP=0x0010000000074184
- (void)setShouldSuppressErrorTTS:(_Bool)arg1;	// IMP=0x001000000007417b
- (_Bool)shouldDismissForIdling;	// IMP=0x0010000000074173
- (double)idleTimerInterval;	// IMP=0x0010000000074165
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x0010000000073e30
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000073e1b
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000073d63
- (void)siriDidDeactivate;	// IMP=0x0010000000073c62
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x00100000000739b4
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x001000000007387f
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000073863

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
