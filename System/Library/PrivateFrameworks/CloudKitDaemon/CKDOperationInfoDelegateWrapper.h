//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKDOperationInfoDelegate;

@interface CKDOperationInfoDelegateWrapper : NSObject
{
    id <CKDOperationInfoDelegate> _delegate;	// 8 = 0x8
    NSString *_personaID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000259b26
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(nonatomic) __weak id <CKDOperationInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performWithDelegate:(CDUnknownBlockType)arg1;	// IMP=0x00000000002599f6
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000259978

@end

