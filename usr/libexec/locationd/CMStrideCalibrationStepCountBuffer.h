//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationStepCountBuffer : NSObject
{
    struct queue<std::pair<double, unsigned int>, std::deque<std::pair<double, unsigned int>>> fStepWindow;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x002000000013bbdc
- (void).cxx_destruct;	// IMP=0x001000000013bbce
- (void)feedStepCountUpdate:(const union NotificationData *)arg1;	// IMP=0x001000000013bb64
- (unsigned int)stepsInWindow;	// IMP=0x001000000013bb12
- (void)ageOutStepArray;	// IMP=0x001000000013ba92

@end

