#!/usr/bin/env ruby

class Tree
    attr_accessor :children, :node_name

    def initialize(tree)
        @node_name = tree.keys[0]
        children = []
        tree[@node_name].each {|c| children.push Tree.new({c[0], c[1]})}
        @children = children
    end


    def visit_all(&block)
        visit &block
        children.each {|c| c.visit_all &block}
    end

    def visit(&block)
        block.call self
    end
end

tree = {'grandpa' => {'dad' => {'child 1' => {}, 'child 2' => {}}, 'uncle' => {'child 3' => {}, 'child 4' => {}}}}
ruby_tree = Tree.new(tree)

puts "Visiting a node"
ruby_tree.visit {|node| puts node.node_name}
puts
puts "visiting entire tree"
ruby_tree.visit_all {|node| puts node.node_name}
