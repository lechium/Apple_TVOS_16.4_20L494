//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICSAPSession;

__attribute__((visibility("hidden")))
@interface ICSAPSessionAbstractOperation : ICAsyncOperation
{
    ICSAPSession *_sapSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015d43a
@property(retain, nonatomic) ICSAPSession *sapSession; // @synthesize sapSession=_sapSession;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000015d3e6
- (void)finishWithSAPContextPreparationError:(id)arg1;	// IMP=0x000000000015d3e0
- (void)executeWithSAPContext:(id)arg1;	// IMP=0x000000000015d3da
- (void)execute;	// IMP=0x000000000015d289

@end

