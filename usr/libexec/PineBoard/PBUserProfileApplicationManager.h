//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue, NSSet, NSString, PBAppInfoController, PBSUserProfile, TVSObserverSet;
@protocol OS_dispatch_queue;

@interface PBUserProfileApplicationManager : NSObject
{
    NSSet *_updatingApplicationIdentifiers;	// 8 = 0x8
    PBSUserProfile *_updatingUserProfile;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSOperationQueue *_manageApplicationsOperationQueue;	// 32 = 0x20
    TVSObserverSet *_observers;	// 40 = 0x28
    PBSUserProfile *_selectedUserProfile;	// 48 = 0x30
    NSMutableSet *_personaEnabledApplicationIdentifiers;	// 56 = 0x38
    PBAppInfoController *_appInfoController;	// 64 = 0x40
}

+ (id)_contentApplicationIdentifiers;	// IMP=0x00200000001c1b67
+ (id)sharedInstance;	// IMP=0x00100000001bfd29
+ (id)dependencyDescription;	// IMP=0x00100000001bf6c5
- (void).cxx_destruct;	// IMP=0x00200000001c209c
@property(readonly, nonatomic, getter=_appInfoController) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) NSMutableSet *personaEnabledApplicationIdentifiers; // @synthesize personaEnabledApplicationIdentifiers=_personaEnabledApplicationIdentifiers;
@property(readonly, nonatomic) PBSUserProfile *selectedUserProfile; // @synthesize selectedUserProfile=_selectedUserProfile;
@property(readonly, nonatomic) TVSObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSOperationQueue *manageApplicationsOperationQueue; // @synthesize manageApplicationsOperationQueue=_manageApplicationsOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x00100000001c1ea0
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00100000001c1c1f
- (void)_workQueue_quitApplicationsRunningWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c1561
- (void)_workQueue_addNotifyObserversDidUpdateApplicationsOperationsWithApplicationIdentifiers:(id)arg1;	// IMP=0x00100000001c1389
- (void)_workQueue_addNotifyObserversWillUpdateApplicationsOperationsWithApplicationIdentifiers:(id)arg1;	// IMP=0x00100000001c11b1
- (void)_workQueue_addManageApplicationsOperationsWithPersonaApplicationIdentifiers:(id)arg1 updatingApplicationIdentifiers:(id)arg2;	// IMP=0x00100000001c05fb
- (void)_workQueue_didUpdatePersonaEnabledApplicationsWithAddedApplicationIdentifiers:(id)arg1 removedApplicationIdentifiers:(id)arg2;	// IMP=0x00100000001c0404
- (void)_workQueue_setSelectedUserProfile:(id)arg1;	// IMP=0x00100000001c024e
- (oneway void)quitGracefullyApplicationsRunningWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c01a2
- (void)quitApplicationsRunningWithPersonaUniqueString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c003d
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001c0026
- (void)addObserver:(id)arg1;	// IMP=0x00100000001c0007
@property(readonly, nonatomic) PBSUserProfile *updatingUserProfile; // @synthesize updatingUserProfile=_updatingUserProfile;
@property(readonly, nonatomic) NSSet *updatingApplicationIdentifiers; // @synthesize updatingApplicationIdentifiers=_updatingApplicationIdentifiers;
@property(readonly, copy) NSString *debugDescription;
- (id)_init;	// IMP=0x00100000001bfc10
- (id)_initWithAppInfoController:(id)arg1;	// IMP=0x00100000001bf7ec

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
