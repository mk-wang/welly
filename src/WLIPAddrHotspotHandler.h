//
//  WLIPAddrHotspotHandler.h
//  Welly
//
//  Created by K.O.ed on 09-1-27.
//  Copyright 2009 Welly Group. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "WLMouseHotspotHandler.h"

@interface WLIPAddrHotspotHandler : WLMouseHotspotHandler <WLUpdatable> {
    NSMutableArray *_ipTooltipsSet;
}
@end
