//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Cards/CRFeedback-Protocol.h>

@protocol CRCard;

@protocol CRAsyncCardRequestFeedback <CRFeedback>
@property(retain, nonatomic) id <CRCard> requestedCard;
@property(retain, nonatomic) id <CRCard> baseCard;
@end

