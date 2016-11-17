function love.load()
    val = 1
    liv = 1000
    fultliv = 1000
    font = love.graphics.newFont("Anonymous.ttf", 12)
    a = io.input("kunstverk/3")
    askii = io.read("*all")
    skjerm = true
    svart = {0, 0, 0}
    kvit =  {255, 255, 255}
end


function love.update(dt)
    skjerm = false
    function love.keyreleased(key)
        if (key == "a" or key == "left"  )and val >= 3 then val = val - 2 end
        if (key == "d" or key == "right" )and val <= 2 then val = val + 2 end
        if (key == "w" or key == "up"    )and val >= 2 then val = val - 1 end
        if (key == "s" or key == "down"  )and val <= 3 then val = val + 1 end
        if key == "return" then val = 100 end
    end
    if love.keyboard.isDown("space") then liv = liv - 5 end
    if love.keyboard.isDown("lctrl") then skjerm = true end
    --skjerm = false
end

-- Draw a coloured rectangle.
function love.draw()


    love.graphics.setFont(font)
    love.graphics.setBackgroundColor(255, 255, 255)

    love.graphics.setColor(255, 0,0)


    love.graphics.rectangle("fill", 10, 10, 300, 40)


    love.graphics.print(val)



    love.graphics.setColor(0, 0,0)
    love.graphics.print(askii , 300, 20, 0, 1, 1,1,1,0,0)
    love.graphics.rectangle("line", 630, 500, 180, 180)
    love.graphics.rectangle("line", 0, 0, 320, 100)
    love.graphics.print("Pokemonnamn", 10, 60)
    love.graphics.print("LVL 90", 280, 60)

    if val == 1 then love.graphics.setColor(0,0, 255) end
        love.graphics.rectangle("fill", 0, 500, 300, 80)
    love.graphics.setColor(0, 0,0)

    if val == 2 then love.graphics.setColor(0,0, 255) end
        love.graphics.rectangle("fill", 0, 600, 300, 80)
    love.graphics.setColor(0, 0,0)

    if val == 3 then love.graphics.setColor(0,0, 255) end
        love.graphics.rectangle("fill", 320, 500, 300, 80)
    love.graphics.setColor(0,  0,0)

    if val == 4 then love.graphics.setColor(0,0, 255) end
        love.graphics.rectangle("fill", 320, 600, 300, 80)
    love.graphics.setColor(0, 0,0)

    if skjerm == true then
        love.graphics.setColor(svart)
        love.graphics.rectangle("fill", 0, 500, 620, 180)

        love.graphics.setColor(kvit)
        love.graphics.rectangle("fill", 20, 520, 580, 140)
    end

    love.graphics.setColor(0, 255,0)
    love.graphics.rectangle("fill", 10, 10, (liv / fultliv) * 300, 40)


end
