---@param node GraphNode
---@param matStackIndex integer
function jers_rosa_starbit_coin_switch(node, matStackIndex)
    local asSwitchNode = cast_graph_node(node)
    local o = geo_get_current_object()
    local toNode = (o.oPosX * o.oPosY / o.oPosZ) % 5
    asSwitchNode.selectedCase = toNode
end

---@param node GraphNode
---@param matStackIndex integer
function jers_rosa_starbit_coin_rotation(node, matStackIndex)
    local rotNode = cast_graph_node(node.next)
    rotNode.rotation.y = get_global_timer() * 0x800
end