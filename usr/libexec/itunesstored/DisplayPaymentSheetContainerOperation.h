//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class DisplayPaymentSheetOperation, ISURLBag, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DisplayPaymentSheetContainerOperation : ISOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 96 = 0x60
    DisplayPaymentSheetOperation *_displayPaymentSheetOperation;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 112 = 0x70
    ISURLBag *_urlBag;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000001bfb76
- (void)_postMetricsEventForError:(id)arg1;	// IMP=0x00100000001bf1e8
- (void)_loadURLBag;	// IMP=0x00100000001bef8e
- (void)run;	// IMP=0x00100000001bdd49
- (void)dealloc;	// IMP=0x00100000001bdce2
- (id)initWithDisplayPaymentSheetOperation:(id)arg1;	// IMP=0x00100000001bdc30

@end
